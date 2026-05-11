#include <algorithm>
#include <cctype>
#include <chrono>
#include <functional>
#include <iostream>
#include <limits>
#include <random>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include "curl/include/curl/curl.h"
#include "include/json.hpp"

using namespace std;
using json = nlohmann::json;

// Small, self-contained single-file game that "connects the parts":
 // - Simple Pokedex (trimmed for brevity)
 // - Starter selection
 // - Random wild Pokemon generator by gym level
 // - A couple of gym leaders with a riddle check
 // - Simple turn-based battle (no external Battle.h dependency)

struct Pokemon
{
    string name;
    int hp;
    int attack;
    vector<string> moves;
    int level;
    string type;
    int iv_hp;
    int iv_attack;
    int iv_defense;
    int ev_hp;
    int ev_attack;
    int ev_defense;

    Pokemon() : name(), hp(0), attack(0), moves(), level(1), type("Normal"), 
                iv_hp(15), iv_attack(15), iv_defense(15), 
                ev_hp(0), ev_attack(0), ev_defense(0) {}

    Pokemon(string pokemonName, int hpValue, int attackValue, int pokemonLevel, vector<string> moveList)
        : name(pokemonName), hp(hpValue), attack(attackValue), moves(moveList), level(pokemonLevel), 
          type("Normal"), iv_hp(15), iv_attack(15), iv_defense(15), 
          ev_hp(0), ev_attack(0), ev_defense(0) {}
};

static std::mt19937& rng()
{
    static std::mt19937 gen(static_cast<unsigned>(chrono::high_resolution_clock::now().time_since_epoch().count()));
    return gen;
}

// Callback for curl to write data
static size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* userp)
{
    userp->append((char*)contents, size * nmemb);
    return size * nmemb;
}

// Fetch Pokémon data from PokéAPI
string fetchFromAPI(const string& pokemonName)
{
    CURL* curl = curl_easy_init();
    if (!curl) return "";
    
    string readBuffer;
    string url = "https://pokeapi.co/api/v2/pokemon/" + pokemonName;
    
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
    
    CURLcode res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    
    if (res != CURLE_OK) {
        cout << "[API] Error fetching " << pokemonName << ": " << curl_easy_strerror(res) << "\n";
        return "";
    }
    return readBuffer;
}

// Parse Pokémon data from JSON and populate struct
bool parsePokemonJSON(const string& jsonData, Pokemon& pokemon)
{
    try {
        auto data = json::parse(jsonData);
        
        pokemon.name = data["name"].get<string>();
        // Capitalize first letter
        if (!pokemon.name.empty()) {
            pokemon.name[0] = toupper(pokemon.name[0]);
        }
        
        // Get base HP and Attack from stats
        auto stats = data["stats"];
        for (auto& stat : stats) {
            string statName = stat["stat"]["name"];
            int baseStat = stat["base_stat"];
            if (statName == "hp") pokemon.hp = baseStat + 10;
            if (statName == "attack") pokemon.attack = baseStat;
        }
        
        // Get type
        auto types = data["types"];
        if (!types.empty()) {
            pokemon.type = types[0]["type"]["name"];
            if (!pokemon.type.empty()) {
                pokemon.type[0] = toupper(pokemon.type[0]);
            }
        }
        
        // Get moves (up to 4)
        auto moves = data["moves"];
        pokemon.moves.clear();
        for (size_t i = 0; i < moves.size() && pokemon.moves.size() < 4; ++i) {
            string moveName = moves[i]["move"]["name"];
            // Capitalize
            if (!moveName.empty()) {
                moveName[0] = toupper(moveName[0]);
            }
            pokemon.moves.push_back(moveName);
        }
        
        // Ensure we have 4 moves
        while (pokemon.moves.size() < 4) {
            pokemon.moves.push_back("Tackle");
        }
        
        // Set IVs to random values (0-31)
        uniform_int_distribution<int> ivDist(10, 31);
        pokemon.iv_hp = ivDist(rng());
        pokemon.iv_attack = ivDist(rng());
        pokemon.iv_defense = ivDist(rng());
        
        // Set EVs to 0 initially
        pokemon.ev_hp = 0;
        pokemon.ev_attack = 0;
        pokemon.ev_defense = 0;
        
        return true;
    }
    catch (exception& e) {
        cout << "[JSON] Parse error: " << e.what() << "\n";
        return false;
    }
}

// Cache to avoid repeated API calls
static map<string, Pokemon> pokemonCache;

// Get Pokémon from API or cache
bool fetchPokemonData(const string& pokemonName, Pokemon& out)
{
    // Check cache first
    if (pokemonCache.find(pokemonName) != pokemonCache.end()) {
        out = pokemonCache[pokemonName];
        return true;
    }
    
    cout << "[API] Fetching " << pokemonName << "...\n";
    string jsonData = fetchFromAPI(pokemonName);
    if (jsonData.empty()) {
        // Fallback to a basic pokemon
        cout << "[!] Could not fetch " << pokemonName << ". Using fallback stats.\n";
        out.name = pokemonName;
        out.hp = 45;
        out.attack = 49;
        out.level = 1;
        out.type = "Normal";
        out.moves = {"Tackle", "Growl", "Defense Curl", "Focus Energy"};
        return false;
    }
    
    if (parsePokemonJSON(jsonData, out)) {
        pokemonCache[pokemonName] = out;
        return true;
    }
    return false;
}

// UI Helper Functions
void printBanner(const string& text)
{
    cout << "\n" << string(50, '=') << "\n";
    cout << "  " << text << "\n";
    cout << string(50, '=') << "\n";
}

void printSeparator()
{
    cout << string(50, '-') << "\n";
}

string getHPBar(int current, int max, int barLength = 20)
{
    if (max <= 0) max = 1;
    int filled = (current > 0) ? (current * barLength) / max : 0;
    filled = min(filled, barLength);
    string bar = "[";
    for (int i = 0; i < barLength; ++i) {
        bar += (i < filled) ? "#" : " ";
    }
    bar += "]";
    return bar;
}

// Trimmed pokedex: expand as needed. Each entry includes moves for display.
// NOTE: Pokémon data is now fetched from PokéAPI instead of being hardcoded
// This allows real-time access to complete stats, types, and movesets

// Helper: find a pokemon by exact name from API (case-insensitive)
// (All Pokemon data now loaded from PokéAPI)

// Helper: find a pokemon by exact name from API (case-insensitive)
bool findPokemonByName(const string& name, Pokemon& out)
{
    string lowerName = name;
    transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
    return fetchPokemonData(lowerName, out);
}

// Generate a random wild pokemon by name depending on gym level (0..n)
Pokemon generateWildPokemon(int gym_level)
{
    vector<vector<string>> pools = {
        { "charmander", "squirtle", "bulbasaur" },
        { "pidgey", "rattata", "magikarp" },
        { "zubat", "pikachu", "geodude" },
        { "rattata", "pidgey", "zubat" }
    };
    
    size_t poolIdx = min(static_cast<size_t>(gym_level), pools.size() - 1);
    vector<string>& pool = pools[poolIdx];
    
    uniform_int_distribution<int> dist(0, static_cast<int>(pool.size()) - 1);
    Pokemon p;
    if (!findPokemonByName(pool[dist(rng())], p)) {
        p.name = "Pidgey";
        p.hp = 40;
        p.attack = 45;
    }
    
    // scale by gym_level
    p.level = max(1, p.level + gym_level);
    p.hp += gym_level * 5;
    p.attack += gym_level * 3;
    return p;
}

// Simple turn-based battle: player attacks first; returns true if player wins
bool simpleBattle(Pokemon player, Pokemon enemy);

// Helper: find a pokemon by exact name from API (case-insensitive)
bool findPokemonByName(const string& name, Pokemon& out);

// Generate a random wild pokemon by name depending on gym level (0..n)
Pokemon generateWildPokemon(int gym_level);

// Simple turn-based battle: player attacks first; returns true if player wins
bool simpleBattle(Pokemon player, Pokemon enemy)
{
    int originalPlayerHP = player.hp;
    int originalEnemyHP = enemy.hp;
    
    printBanner("BATTLE START!");
    cout << "  " << player.name << " vs " << enemy.name << "\n";
    printSeparator();

    while (player.hp > 0 && enemy.hp > 0) {
        // Display current battle state
        cout << "\n[YOUR POKEMON]\n";
        cout << "  " << player.name << " Lv. " << player.level << "\n";
        cout << "  " << getHPBar(player.hp, originalPlayerHP) << " ";
        cout << player.hp << "/" << originalPlayerHP << "\n\n";
        
        cout << "[OPPONENT POKEMON]\n";
        cout << "  " << enemy.name << " Lv. " << enemy.level << "\n";
        cout << "  " << getHPBar(enemy.hp, originalEnemyHP) << " ";
        cout << enemy.hp << "/" << originalEnemyHP << "\n";
        
        // Player turn: pick a move (1..moves)
        cout << "\n" << string(40, '-') << "\n";
        cout << "YOUR TURN - Choose a move:\n";
        for (size_t i = 0; i < player.moves.size(); ++i) {
            cout << "  [" << (i + 1) << "] " << player.moves[i] << " (~" << player.attack << " damage)\n";
        }
        cout << ":> ";
        int choice = 1;
        if (!(cin >> choice) || choice < 1 || choice > static_cast<int>(player.moves.size())) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n[!] Invalid input, using move 1.\n";
            choice = 1;
        }

        cout << "\n>>> " << player.name << " used " << player.moves[choice - 1] << "!\n";
        enemy.hp -= player.attack;
        if (enemy.hp < 0) enemy.hp = 0;
        
        if (enemy.hp <= 0) {
            cout << ">>> " << enemy.name << " fainted!\n";
            printBanner("VICTORY!");
            return true;
        }
        cout << ">>> " << enemy.name << " took damage! (" << enemy.hp << " HP remaining)\n";

        // Enemy turn: simple AI picks first move
        cout << "\n[!] " << enemy.name << " attacks!\n";
        player.hp -= enemy.attack;
        if (player.hp < 0) player.hp = 0;
        
        if (player.hp <= 0) {
            cout << ">>> " << player.name << " fainted!\n";
            printBanner("DEFEAT!");
            return false;
        }
        cout << ">>> Your " << player.name << " took damage! (" << player.hp << " HP remaining)\n";
    }
    return player.hp > 0;
}

// Riddle helpers for gym leaders. Returns true when answered correctly.
bool riddleQuestion(const string& question, const vector<string>& options, char correct)
{
    printSeparator();
    cout << question << "\n\n";
    for (size_t i = 0; i < options.size(); ++i) {
        cout << "  [" << char('a' + static_cast<int>(i)) << "] " << options[i] << "\n";
    }
    cout << "\n:> ";
    char ans;
    // eat whitespace
    do { cin >> ans; } while (isspace(ans));
    if (ans == correct) {
        cout << "\n[+] Correct! Well done!\n";
        return true;
    }
    cout << "\n[-] Wrong. Try again: ";
    do { cin >> ans; } while (isspace(ans));
    if (ans == correct) {
        cout << "\n[+] Correct! Well done!\n";
        return true;
    }
    cout << "\n[-] Wrong again — you suffer a minor penalty (skip next wild encounter).\n";
    return false;
}

int main()
{
    printBanner("POKEMON: BUT WORST");
    cout << "\nDo you want to play? (y/n): ";
    char start;
    if (!(cin >> start) || start != 'y') {
        cout << "\nMaybe next time!\n";
        return 0;
    }

    // Starter selection
    printBanner("SELECT YOUR STARTER");
    cout << "  [1] Bulbasaur   (Grass-type)\n";
    cout << "  [2] Charmander  (Fire-type)\n";
    cout << "  [3] Squirtle    (Water-type)\n";
    cout << "\n:> ";
    int starterChoice = 0;
    cin >> starterChoice;
    string starterName;
    switch (starterChoice) {
    case 1: starterName = "Bulbasaur"; break;
    case 2: starterName = "Charmander"; break;
    case 3: starterName = "Squirtle"; break;
    default:
        cout << "\n[!] Invalid choice — defaulting to Bulbasaur.\n";
        starterName = "Bulbasaur";
        break;
    }

    Pokemon playerPokemon;
    if (!findPokemonByName(starterName, playerPokemon)) {
        cout << "\nStarter not found in pokedex — exiting.\n";
        return 1;
    }
    printBanner("YOUR STARTER: " + playerPokemon.name);
    cout << "  HP:     " << playerPokemon.hp << "\n";
    cout << "  Attack: " << playerPokemon.attack << "\n";
    cout << "  Level:  " << playerPokemon.level << "\n";
    cout << "\n  Moves: ";
    for (size_t i = 0; i < playerPokemon.moves.size(); ++i) {
        if (i > 0) cout << ", ";
        cout << playerPokemon.moves[i];
    }
    cout << "\n";

    // Rival battle (simple): rival chooses a counter
    Pokemon rivalPokemon;
    Pokemon temp_charmander, temp_squirtle, temp_bulbasaur;
    
    // Fetch the rival's potential Pokemon from API
    findPokemonByName("Charmander", temp_charmander);
    findPokemonByName("Squirtle", temp_squirtle);
    findPokemonByName("Bulbasaur", temp_bulbasaur);
    
    if (playerPokemon.name == "Bulbasaur") rivalPokemon = temp_charmander;
    else if (playerPokemon.name == "Charmander") rivalPokemon = temp_squirtle;
    else rivalPokemon = temp_bulbasaur;

    // Slightly boost rival
    rivalPokemon.level += 1;
    rivalPokemon.hp += 5;
    rivalPokemon.attack += 3;

    printBanner("RIVAL BATTLE!");
    cout << "\nYour rival challenges you with " << rivalPokemon.name << "!\n";
    bool won = simpleBattle(playerPokemon, rivalPokemon);
    if (!won) {
        printBanner("GAME OVER");
        cout << "\nYou lost to the rival. Try again next time!\n";
        return 0;
    }

    // Give player a random second Pokemon based on gym_level 1 (early game)
    int gyms_beaten = 0;
    Pokemon wild = generateWildPokemon(1);
    printBanner("WILD POKEMON ENCOUNTER");
    cout << "\nWhile traveling, you encounter a wild " << wild.name << " (Lv " << wild.level << ")!\n";
    cout << "You successfully caught it!\n";

    // Simple gym progression with two gym leaders & riddles
    vector<pair<string, function<bool()>>> gymRiddles;
    gymRiddles.push_back({ "Brock (Gym 1) riddle", [&]() {
        return riddleQuestion("How many Pokemon are there?", { "151", "Like 5", "1 billion lions", "1025" }, 'a');
    }});
    gymRiddles.push_back({ "Misty (Gym 2) riddle", [&]() {
        return riddleQuestion("What is the 37th Pokemon?", { "Jigglypuff", "Ninetales", "Vulpix", "Wigglytuff" }, 'c');
    }});

    // Simplified gym leader teams
    vector<Pokemon> brockTeam = { { "Geodude", 40, 55, 5, { "Rock Throw", "Rollout" } },
                                 { "Onix", 35, 60, 6, { "Rock Tomb", "Sandstorm" } } };
    vector<Pokemon> mistyTeam = { { "Psyduck", 50, 45, 5, { "Water Gun", "Confusion" } },
                                 { "Staryu", 30, 40, 5, { "Water Gun", "Rapid Spin" } } };

    for (size_t i = 0; i < gymRiddles.size(); ++i) {
        printBanner("GYM " + to_string(i + 1) + ": " + gymRiddles[i].first);
        cout << "\nArriving at the gym...\n";
        bool riddlePassed = gymRiddles[i].second();
        if (!riddlePassed) {
            cout << "\n[!] You failed the riddle. Come back when you're ready!\n";
            continue;
        }
        cout << "\n[+] Riddle passed! Prepare for battle!\n";

        // Battle first pokemon of the leader as a short encounter
        Pokemon leaderPkm = (i == 0) ? brockTeam[0] : mistyTeam[0];
        // scale leader pokemon by gym index
        leaderPkm.hp += static_cast<int>(i) * 10;
        leaderPkm.attack += static_cast<int>(i) * 5;

        // Let player choose which of their two pokemon to fight with
        cout << "\n" << string(40, '-') << "\n";
        cout << "Choose which Pokemon to send:\n";
        cout << "  [1] " << playerPokemon.name << "\n";
        cout << "  [2] " << wild.name << "\n";
        cout << "\n:> ";
        int sendChoice = 1;
        cin >> sendChoice;
        Pokemon chosen = (sendChoice == 2) ? wild : playerPokemon;
        cout << "\nYou sent out " << chosen.name << "!\n\n";

        bool gymWon = simpleBattle(chosen, leaderPkm);
        if (gymWon) {
            printBanner("GYM " + to_string(i + 1) + " CLEARED!");
            cout << "\nYou defeated the gym leader! Badge earned!\n";
            gyms_beaten++;
        }
        else {
            cout << "\n[!] You lost the gym battle. Train harder and try again!\n";
        }
    }

    printBanner("GAME SESSION ENDED");
    cout << "\nGym Badges Earned: " << gyms_beaten << "/2\n";
    cout << "\nThanks for playing! Better luck next time, trainer!\n";
    return 0;
}
