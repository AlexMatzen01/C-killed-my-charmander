#include <iostream>
#include "Battle.h"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <random>
#include <stdexcept>
using namespace std;
int main() {
	// Initialize game
	// Display welcome message and instructions
	cout << "welcom to pokemon but worst" << endl;
	cout << "do you want to play? (y/n)" << endl;
	if (cin.get() != 'y') {
		cout << "maybe next time!" << endl;
		return 0;
	else {
		cout << "let's get started!" << endl;
		//this start game
	}
	// Step 1: Choose your starter Pokemon
	// Display starter options and get user input
	// Step 2: Battle against rival
	// Initialize rival's Pokemon and start battle
	// Step 3: Randomly give second Pokemon
	// Generate random Pokemon and add to player's inventory
	// Step 4-20: Gym battles and random Pokemon encounters
	// Loop through gym battles and random encounters, updating player's inventory and stats
	// Step 21: Elite Four gauntlet
	// Initialize Elite Four members and start battles
	// Step 22: Rival battle for the championship
	// Initialize rival's final Pokemon and start battle
	// Step 23: End game or post-game content
	// Display end game message or post-game content
	return 0;
}

// Typed Pokémon entry: name, attack, hp, level
struct PokemonInfo {
    string name;
    int attack;
    int hp;
    int level;
};

vector<PokemonInfo> pokedex = {
    { "Bulbasaur", 45, 49, 1 },
    { "Ivysaur", 60, 61, 1 },
    { "Venusaur", 80, 81, 1 },
    { "Charmander", 39, 51, 1 },
    { "Charmeleon", 58, 64, 1 },
    { "Charizard", 78, 84, 1 },
    { "Squirtle", 44, 48, 1 },
    { "Wartortle", 59, 63, 1 },
    { "Blastoise", 79, 83, 1 },
    { "Caterpie", 45, 30, 1 },
    { "Metapod", 50, 10, 1 },
    { "Butterfree", 60, 45, 1 },
    { "Weedle", 40, 35, 1 },
    { "Kakuna", 45, 15, 1 },
    { "Beedrill", 65, 90, 1 },
    { "Pidgey", 40, 45, 1 },
    { "Pidgeotto", 63, 60, 1 },
    { "Pidgeot", 83, 80, 1 },
    { "Rattata", 30, 56, 1 },
    { "Raticate", 55, 81, 1 },
    { "Spearow", 40, 60, 1 },
    { "Fearow", 65, 90, 1 },
    { "Ekans", 35, 60, 1 },
    { "Arbok", 60, 85, 1 },
    { "Pikachu", 35, 55, 1 },
    { "Raichu", 60, 90, 1 },
    { "Sandshrew", 50, 75, 1 },
    { "Sandslash", 75, 100, 1 },
    { "NidoranF", 55, 47, 1 },
    { "Nidorina", 70, 61, 1 },
    { "Nidoqueen", 90, 91, 1 },
    { "NidoranM", 46, 57, 1 },
    { "Nidorino", 61, 71, 1 },
    { "Nidoking", 81, 101, 1 },
    { "Clefairy", 70, 45, 1 },
    { "Clefable", 95, 70, 1 },
    { "Vulpix", 38, 41, 1 },
    { "Ninetales", 73, 76, 1 },
    { "Jigglypuff", 115, 45, 1 },
    { "Wigglytuff", 140, 70, 1 },
    { "Zubat", 40, 45, 1 },
    { "Golbat", 75, 80, 1 },
    { "Oddish", 45, 50, 1 },
    { "Gloom", 60, 65, 1 },
    { "Vileplume", 75, 80, 1 },
    { "Paras", 35, 70, 1 },
    { "Parasect", 60, 95, 1 },
    { "Venonat", 60, 55, 1 },
    { "Venomoth", 70, 65, 1 },
    { "Diglett", 10, 55, 1 },
    { "Dugtrio", 35, 100, 1 },
    { "Meowth", 40, 45, 1 },
    { "Persian", 65, 70, 1 },
    { "Psyduck", 50, 51, 1 },
    { "Golduck", 80, 81, 1 },
    { "Mankey", 40, 80, 1 },
    { "Primeape", 65, 105, 1 },
    { "Growlithe", 55, 70, 1 },
    { "Arcanine", 90, 110, 1 },
    { "Poliwag", 40, 50, 1 },
    { "Poliwhirl", 65, 65, 1 },
    { "Poliwrath", 90, 95, 1 },
    { "Abra", 15, 10, 1 },
    { "Kadabra", 40, 35, 1 },
    { "Alakazam", 55, 50, 1 },
    { "Machop", 70, 80, 1 },
    { "Machoke", 80, 100, 1 },
    { "Machamp", 90, 130, 1 },
    { "Bellsprout", 50, 75, 1 },
    { "Weepinbell", 65, 90, 1 },
    { "Victreebel", 80, 105, 1 },
    { "Tentacool", 40, 40, 1 },
    { "Tentacruel", 80, 70, 1 },
    { "Geodude", 40, 80, 1 },
    { "Graveler", 55, 95, 1 },
    { "Golem", 80, 110, 1 },
    { "Ponyta", 50, 85, 1 },
    { "Rapidash", 65, 100, 1 },
    { "Slowpoke", 90, 65, 1 },
    { "Slowbro", 95, 75, 1 },
    { "Magnemite", 15, 35, 1 },
    { "Magneton", 50, 60, 1 },
    { "Farfetchd", 51, 65, 1 },
    { "Doduo", 35, 85, 1 },
    { "Dodrio", 60, 110, 1 },
    { "Seel", 65, 45, 1 },
    { "Dewgong", 90, 70, 1 },
    { "Grimer", 80, 80, 1 },
    { "Muk", 105, 105, 1 },
    { "Shellder", 30, 65, 1 },
    { "Cloyster", 50, 95, 1 },
    { "Gastly", 30, 35, 1 },
    { "Haunter", 45, 50, 1 },
    { "Gengar", 60, 65, 1 },
    { "Onix", 35, 45, 1 },
    { "Drowzee", 60, 48, 1 },
    { "Hypno", 85, 73, 1 },
    { "Krabby", 30, 105, 1 },
    { "Kingler", 55, 130, 1 },
    { "Voltorb", 40, 30, 1 },
    { "Electrode", 60, 50, 1 },
    { "Exeggcute", 60, 40, 1 },
    { "Exeggutor", 95, 95, 1 },
    { "Cubone", 50, 50, 1 },
    { "Marowak", 60, 80, 1 },
    { "Hitmonlee", 50, 110, 1 },
    { "Hitmonchan", 50, 105, 1 },
    { "Lickitung", 90, 55, 1 },
    { "Koffing", 40, 65, 1 },
    { "Weezing", 65, 90, 1 },
    { "Rhyhorn", 80, 85, 1 },
    { "Rhydon", 105, 130, 1 },
    { "Chansey", 150, 5, 1 },
    { "Tangela", 65, 55, 1 },
    { "Kangaskhan", 105, 95, 1 },
    { "Horsea", 30, 40, 1 },
    { "Seadra", 55, 65, 1 },
    { "Goldeen", 45, 67, 1 },
    { "Seaking", 80, 91, 1 },
    { "Staryu", 30, 45, 1 },
    { "Starmie", 60, 75, 1 },
    { "MrMime", 40, 45, 1 },
    { "Scyther", 70, 110, 1 },
    { "Jynx", 65, 50, 1 },
    { "Electabuzz", 65, 83, 1 },
    { "Magmar", 65, 95, 1 },
    { "Pinsir", 65, 115, 1 },
    { "Tauros", 75, 100, 1 },
    { "Magikarp", 10, 10, 1 },
    { "Gyarados", 95, 115, 1 },
    { "Lapras", 130, 85, 1 },
    { "Ditto", 48, 48, 1 },
    { "Eevee", 55, 55, 1 },
    { "Vaporeon", 130, 65, 1 },
    { "Jolteon", 65, 65, 1 },
    { "Flareon", 65, 130, 1 },
    { "Porygon", 65, 60, 1 },
    { "Omanyte", 35, 40, 1 },
    { "Omastar", 70, 60, 1 },
    { "Kabuto", 30, 80, 1 },
    { "Kabutops", 60, 115, 1 },
    { "Aerodactyl", 80, 105, 1 },
    { "Snorlax", 160, 110, 1 },
    { "Articuno", 90, 85, 1 },
    { "Zapdos", 90, 90, 1 },
    { "Moltres", 90, 100, 1 },
    { "Dratini", 41, 64, 1 },
    { "Dragonair", 61, 84, 1 },
    { "Dragonite", 91, 134, 1 },
    { "Mewtwo", 106, 110, 1 },
    { "Mew", 100, 100, 1 },
    { "Chikorita", 45, 49, 1 },
    { "Bayleef", 60, 61, 1 },
    { "Meganium", 80, 81, 1 },
    { "Cyndaquil", 39, 51, 1 },
    { "Quilava", 58, 64, 1 },
    { "Typhlosion", 78, 84, 1 },
    { "Totodile", 50, 65, 1 },
    { "Croconaw", 65, 80, 1 },
    { "Feraligatr", 85, 105, 1 },
    { "Sentret", 35, 46, 1 },
    { "Furret", 85, 76, 1 },
    { "Hoothoot", 60, 30, 1 },
    { "Noctowl", 100, 50, 1 },
    { "Ledyba", 40, 10, 1 },
    { "Ledian", 55, 35, 1 },
    { "Spinarak", 40, 60, 1 },
    { "Ariados", 70, 90, 1 },
    { "Crobat", 85, 90, 1 },
    { "Chinchou", 75, 38, 1 },
    { "Lanturn", 115, 58, 1 },
    { "Pichu", 10, 40, 1 },
    { "Cleffa", 50, 15, 1 },
    { "Igglybuff", 90, 30, 1 },
    { "Togepi", 35, 10, 1 },
    { "Togetic", 55, 40, 1 },
    { "Natu", 40, 50, 1 },
    { "Xatu", 65, 75, 1 },
    { "Mareep", 55, 40, 1 },
    { "Flaaffy", 70, 55, 1 },
    { "Ampharos", 90, 75, 1 },
    { "Bellossom", 75, 80, 1 },
    { "Marill", 70, 10, 1 },
    { "Azumarill", 100, 50, 1 },
    { "Sudowoodo", 70, 100, 1 },
    { "Politoed", 90, 75, 1 },
    { "Hoppip", 35, 35, 1 },
    { "Skiploom", 55, 45, 1 },
    { "Jumpluff", 75, 55, 1 },
    { "Aipom", 55, 70, 1 },
    { "Sunkern", 30, 30, 1 },
    { "Sunflora", 75, 75, 1 },
    { "Yanma", 65, 65, 1 },
    { "Wooper", 55, 45, 1 },
    { "Quagsire", 95, 85, 1 },
    { "Espeon", 65, 65, 1 },
    { "Umbreon", 95, 65, 1 },
    { "Murkrow", 60, 85, 1 },
    { "Slowking", 95, 75, 1 },
    { "Misdreavus", 60, 60, 1 },
    { "Unown", 48, 71, 1 },
    { "Wobbuffet", 190, 33, 1 },
    { "Girafarig", 70, 80, 1 },
    { "Pineco", 50, 65, 1 },
    { "Forretress", 75, 90, 1 },
    { "Dunsparce", 100, 70, 1 },
    { "Gligar", 65, 75, 1 },
    { "Steelix", 75, 85, 1 },
    { "Snubbull", 60, 80, 1 },
    { "Granbull", 90, 110, 1 },
    { "Qwilfish", 65, 95, 1 },
    { "Scizor", 70, 130, 1 },
    { "Shuckle", 10, 10, 1 },
    { "Heracross", 80, 115, 1 },
    { "Sneasel", 55, 95, 1 },
    { "Teddiursa", 60, 80, 1 },
    { "Ursaring", 90, 130, 1 },
    { "Slugma", 40, 40, 1 },
    { "Magcargo", 50, 50, 1 },
    { "Swinub", 50, 50, 1 },
    { "Piloswine", 100, 100, 1 },
    { "Corsola", 55, 55, 1 },
    { "Remoraid", 35, 65, 1 },
    { "Octillery", 75, 105, 1 },
    { "Delibird", 45, 55, 1 },
    { "Mantine", 85, 40, 1 },
    { "Skarmory", 65, 80, 1 },
    { "Houndour", 45, 60, 1 },
    { "Houndoom", 75, 90, 1 },
    { "Kingdra", 75, 95, 1 },
    { "Phanpy", 90, 60, 1 },
    { "Donphan", 90, 110, 1 },
    { "Porygon1", 85, 80, 1 },
    { "Stantler", 73, 95, 1 },
    { "Smeargle", 55, 10, 1 },
    { "Tyrogue", 35, 35, 1 },
    { "Hitmontop", 50, 95, 1 },
    { "Smoochum", 45, 30, 1 },
    { "Elekid", 45, 63, 1 },
    { "Magby", 45, 75, 1 },
    { "Miltank", 95, 80, 1 },
    { "Blissey", 155, 10, 1 },
    { "Raikou", 90, 85, 1 },
    { "Entei", 115, 115, 1 },
    { "Suicune", 100, 75, 1 },
    { "Larvitar", 50, 64, 1 },
    { "Pupitar", 70, 84, 1 },
    { "Tyranitar", 100, 134, 1 },
    { "Lugia", 106, 90, 1 },
    { "Ho-Oh", 106, 130, 1 },
    { "Celebi", 100, 100, 1 },
    { "Treecko", 40, 45, 3 },
    { "Grovyle", 50, 65, 3 },
    { "Sceptile", 70, 85, 3 },
    { "Torchic", 45, 60, 3 },
    { "Combusken", 60, 85, 3 },
    { "Blaziken", 80, 120, 3 },
    { "Mudkip", 50, 70, 3 },
    { "Marshtomp", 70, 85, 3 },
    { "Swampert", 100, 110, 3 },
    { "Poochyena", 35, 55, 3 },
    { "Mightyena", 70, 90, 3 },
    { "Zigzagoon", 38, 30, 3 },
    { "Linoone", 78, 70, 3 },
    { "Wurmple", 45, 45, 3 },
    { "Silcoon", 50, 35, 3 },
    { "Beautifly", 60, 70, 3 },
    { "Cascoon", 50, 35, 3 },
    { "Dustox", 60, 50, 3 },
    { "Lotad", 40, 30, 3 },
    { "Lombre", 60, 50, 3 },
    { "Ludicolo", 80, 70, 3 },
    { "Seedot", 40, 40, 3 },
    { "Nuzleaf", 70, 70, 3 },
    { "Shiftry", 90, 100, 3 },
    { "Taillow", 40, 55, 3 },
    { "Swellow", 60, 85, 3 },
    { "Wingull", 40, 30, 3 },
    { "Pelipper", 60, 50, 3 },
    { "Ralts", 28, 25, 3 },
    { "Kirlia", 38, 35, 3 },
    { "Gardevoir", 68, 65, 3 },
    { "Surskit", 40, 30, 3 },
    { "Masquerain", 70, 60, 3 },
    { "Shroomish", 60, 40, 3 },
    { "Breloom", 60, 130, 3 },
    { "Slakoth", 60, 60, 3 },
    { "Vigoroth", 80, 80, 3 },
    { "Slaking", 150, 160, 3 },
    { "Nincada", 31, 45, 3 },
    { "Ninjask", 61, 90, 3 },
    { "Shedinja", 1, 90, 3 },
    { "Whismur", 64, 51, 3 },
    { "Loudred", 84, 71, 3 },
    { "Exploud", 104, 91, 3 },
    { "Makuhita", 72, 60, 3 },
    { "Hariyama", 144, 120, 3 },
    { "Azurill", 50, 20, 3 },
    { "Nosepass", 30, 45, 3 },
    { "Skitty", 50, 45, 3 },
    { "Delcatty", 70, 65, 3 },
    { "Sableye", 50, 75, 3 },
    { "Mawile", 50, 85, 3 },
    { "Aron", 50, 70, 3 },
    { "Lairon", 60, 90, 3 },
    { "Aggron", 70, 110, 3 },
    { "Meditite", 30, 40, 3 },
    { "Medicham", 60, 60, 3 },
    { "Electrike", 40, 45, 3 },
    { "Manectric", 70, 75, 3 },
    { "Plusle", 60, 50, 3 },
    { "Minun", 60, 40, 3 },
    { "Volbeat", 65, 73, 3 },
    { "Illumise", 65, 47, 3 },
    { "Roselia", 50, 60, 3 },
    { "Gulpin", 70, 43, 3 },
    { "Swalot", 100, 73, 3 },
    { "Carvanha", 45, 90, 3 },
    { "Sharpedo", 70, 120, 3 },
    { "Wailmer", 130, 70, 3 },
    { "Wailord", 170, 90, 3 },
    { "Numel", 60, 60, 3 },
    { "Camerupt", 70, 100, 3 },
    { "Torkoal", 70, 85, 3 },
    { "Spoink", 60, 25, 3 },
    { "Grumpig", 80, 45, 3 },
    { "Spinda", 60, 60, 3 },
    { "Trapinch", 45, 100, 3 },
    { "Vibrava", 50, 70, 3 },
    { "Flygon", 80, 100, 3 },
    { "Cacnea", 50, 85, 3 },
    { "Cacturne", 70, 115, 3 },
    { "Swablu", 45, 40, 3 },
    { "Altaria", 75, 70, 3 },
    { "Zangoose", 73, 115, 3 },
    { "Seviper", 73, 100, 3 },
    { "Lunatone", 70, 55, 3 },
    { "Solrock", 70, 95, 3 },
    { "Barboach", 50, 48, 3 },
    { "Whiscash", 110, 78, 3 },
    { "Corphish", 43, 80, 3 },
    { "Crawdaunt", 63, 120, 3 },
    { "Baltoy", 40, 40, 3 },
    { "Claydol", 60, 70, 3 },
    { "Lileep", 66, 41, 3 },
    { "Cradily", 86, 81, 3 },
    { "Anorith", 45, 95, 3 },
    { "Armaldo", 75, 125, 3 },
    { "Feebas", 20, 15, 3 },
    { "Milotic", 95, 60, 3 },
    { "Castform", 70, 70, 3 },
    { "Kecleon", 60, 90, 3 },
    { "Shuppet", 44, 75, 3 },
    { "Banette", 64, 115, 3 },
    { "Duskull", 20, 40, 3 },
    { "Dusclops", 40, 70, 3 },
    { "Tropius", 99, 68, 3 },
    { "Chimecho", 65, 50, 3 },
    { "Absol", 65, 130, 3 },
    { "Wynaut", 95, 23, 3 },
    { "Snorunt", 50, 50, 3 },
    { "Glalie", 80, 80, 3 },
    { "Spheal", 70, 40, 3 },
    { "Sealeo", 90, 60, 3 },
    { "Walrein", 110, 80, 3 },
    { "Clamperl", 35, 64, 3 },
    { "Huntail", 55, 104, 3 },
    { "Gorebyss", 55, 84, 3 },
    { "Relicanth", 100, 90, 3 },
    { "Luvdisc", 43, 30, 3 },
    { "Bagon", 45, 75, 3 },
    { "Shelgon", 65, 95, 3 },
    { "Salamence", 95, 135, 3 },
    { "Beldum", 40, 55, 3 },
    { "Metang", 60, 75, 3 },
    { "Metagross", 80, 135, 3 },
    { "Regirock", 80, 100, 3 },
    { "Regice", 80, 50, 3 },
    { "Registeel", 80, 75, 3 },
    { "Latias", 80, 80, 3 },
    { "Latios", 80, 90, 3 },
    { "Kyogre", 100, 100, 3 },
    { "Groudon", 100, 150, 3 },
    { "Rayquaza", 105, 150, 3 },
    { "Jirachi", 100, 100, 3 },
    { "Deoxys", 50, 150, 3 },
    { "Turtwig", 55, 68, 4 },
    { "Grotle", 75, 89, 4 },
    { "Torterra", 95, 109, 4 },
    { "Chimchar", 44, 58, 4 },
    { "Monferno", 64, 78, 4 },
    { "Infernape", 76, 104, 4 },
    { "Piplup", 53, 51, 4 },
    { "Prinplup", 64, 66, 4 },
    { "Empoleon", 84, 86, 4 },
    { "Starly", 40, 55, 4 },
    { "Staravia", 55, 75, 4 },
    { "Staraptor", 85, 120, 4 },
    { "Bidoof", 59, 45, 4 },
    { "Bibarel", 79, 85, 4 },
    { "Kricketot", 37, 25, 4 },
    { "Kricketune", 77, 85, 4 },
    { "Shinx", 45, 65, 4 },
    { "Luxio", 60, 85, 4 },
    { "Luxray", 80, 120, 4 },
    { "Budew", 40, 30, 4 },
    { "Roserade", 60, 70, 4 },
    { "Cranidos", 67, 125, 4 },
    { "Rampardos", 97, 165, 4 },
    { "Shieldon", 30, 42, 4 },
    { "Bastiodon", 60, 52, 4 },
    { "Burmy", 40, 29, 4 },
    { "Wormadam", 60, 59, 4 },
    { "Mothim", 70, 94, 4 },
    { "Combee", 30, 30, 4 },
    { "Vespiquen", 70, 80, 4 },
    { "Pachirisu", 60, 45, 4 },
    { "Buizel", 55, 65, 4 },
    { "Floatzel", 85, 105, 4 },
    { "Cherubi", 45, 35, 4 },
    { "Cherrim", 70, 60, 4 },
    { "Shellos", 76, 48, 4 },
    { "Gastrodon", 111, 83, 4 },
    { "Ambipom", 75, 100, 4 },
    { "Drifloon", 90, 50, 4 },
    { "Drifblim", 150, 80, 4 },
    { "Buneary", 55, 66, 4 },
    { "Lopunny", 65, 76, 4 },
    { "Mismagius", 60, 60, 4 },
    { "Honchkrow", 100, 125, 4 },
    { "Glameow", 49, 55, 4 },
    { "Purugly", 71, 82, 4 },
    { "Chingling", 45, 30, 4 },
    { "Stunky", 63, 63, 4 },
    { "Skuntank", 103, 93, 4 },
    { "Bronzor", 57, 24, 4 },
    { "Bronzong", 67, 89, 4 },
    { "Bonsly", 50, 80, 4 },
    { "MimeJr", 20, 25, 4 },
    { "Happiny", 100, 5, 4 },
    { "Chatot", 76, 65, 4 },
    { "Spiritomb", 50, 92, 4 },
    { "Gible", 58, 70, 4 },
    { "Gabite", 68, 90, 4 },
    { "Garchomp", 108, 130, 4 },
    { "Munchlax", 135, 85, 4 },
    { "Riolu", 40, 70, 4 },
    { "Lucario", 70, 110, 4 },
    { "Hippopotas", 68, 72, 4 },
    { "Hippowdon", 108, 112, 4 },
    { "Skorupi", 40, 50, 4 },
    { "Drapion", 70, 90, 4 },
    { "Croagunk", 48, 61, 4 },
    { "Toxicroak", 83, 106, 4 },
    { "Carnivine", 74, 100, 4 },
    { "Finneon", 49, 49, 4 },
    { "Lumineon", 69, 69, 4 },
    { "Mantyke", 45, 20, 4 },
    { "Snover", 60, 62, 4 },
    { "Abomasnow", 90, 92, 4 },
    { "Weavile", 70, 120, 4 },
    { "Magnezone", 70, 70, 4 },
    { "Lickilicky", 110, 85, 4 },
    { "Rhyperior", 115, 140, 4 },
    { "Tangrowth", 100, 100, 4 },
    { "Electivire", 75, 123, 4 },
    { "Magmortar", 75, 95, 4 },
    { "Togekiss", 85, 50, 4 },
    { "Yanmega", 86, 76, 4 },
    { "Leafeon", 65, 110, 4 },
    { "Glaceon", 65, 60, 4 },
    { "Gliscor", 75, 95, 4 },
    { "Mamoswine", 110, 130, 4 },
    { "PorygonZ", 85, 80, 4 },
    { "Gallade", 68, 125, 4 },
    { "Probopass", 60, 55, 4 },
    { "Dusknoir", 45, 100, 4 },
    { "Froslass", 70, 80, 4 },
    { "Rotom", 50, 50, 4 },
    { "Uxie", 75, 75, 4 },
    { "Mesprit", 80, 105, 4 },
    { "Azelf", 75, 125, 4 },
    { "Dialga", 100, 120, 4 },
    { "Palkia", 90, 120, 4 },
    { "Heatran", 91, 90, 4 },
    { "Regigigas", 110, 160, 4 },
    { "Giratina", 150, 100, 4 },
    { "Cresselia", 120, 70, 4 },
    { "Phione", 80, 80, 4 },
    { "Manaphy", 100, 100, 4 },
    { "Darkrai", 70, 90, 4 },
    { "Shaymin", 100, 100, 4 },
    { "Arceus", 120, 120, 4 },
    { "Victini", 100, 100, 5 },
    { "Snivy", 45, 45, 5 },
    { "Servine", 60, 60, 5 },
    { "Serperior", 75, 75, 5 },
    { "Tepig", 65, 63, 5 },
    { "Pignite", 90, 93, 5 },
    { "Emboar", 110, 123, 5 },
    { "Oshawott", 55, 55, 5 },
    { "Dewott", 75, 75, 5 },
    { "Samurott", 95, 100, 5 },
    { "Patrat", 45, 55, 5 },
    { "Watchog", 60, 85, 5 },
    { "Lillipup", 45, 60, 5 },
    { "Herdier", 65, 80, 5 },
    { "Stoutland", 85, 110, 5 },
    { "Purrloin", 41, 50, 5 },
    { "Liepard", 64, 88, 5 },
    { "Pansage", 50, 53, 5 },
    { "Simisage", 75, 98, 5 },
    { "Pansear", 50, 53, 5 },
    { "Simisear", 75, 98, 5 },
    { "Panpour", 50, 53, 5 },
    { "Simipour", 75, 98, 5 },
    { "Munna", 76, 25, 5 },
    { "Musharna", 116, 55, 5 },
    { "Pidove", 50, 55, 5 },
    { "Tranquill", 62, 77, 5 },
    { "Unfezant", 80, 115, 5 },
    { "Blitzle", 45, 60, 5 },
    { "Zebstrika", 75, 100, 5 },
    { "Roggenrola", 55, 75, 5 },
    { "Boldore", 70, 105, 5 },
    { "Gigalith", 85, 135, 5 },
    { "Woobat", 55, 45, 5 },
    { "Swoobat", 67, 57, 5 },
    { "Drilbur", 60, 85, 5 },
    { "Excadrill", 110, 135, 5 },
    { "Audino", 103, 60, 5 },
    { "Timburr", 75, 80, 5 },
    { "Gurdurr", 85, 105, 5 },
    { "Conkeldurr", 105, 140, 5 },
    { "Tympole", 50, 50, 5 },
    { "Palpitoad", 75, 65, 5 },
    { "Seismitoad", 105, 95, 5 },
    { "Throh", 120, 100, 5 },
    { "Sawk", 75, 125, 5 },
    { "Sewaddle", 45, 53, 5 },
    { "Swadloon", 55, 63, 5 },
    { "Leavanny", 75, 103, 5 },
    { "Venipede", 30, 45, 5 },
    { "Whirlipede", 40, 55, 5 },
    { "Scolipede", 60, 100, 5 },
    { "Cottonee", 40, 27, 5 },
    { "Whimsicott", 60, 67, 5 },
    { "Petilil", 45, 35, 5 },
    { "Lilligant", 70, 60, 5 },
    { "Basculin", 70, 92, 5 },
    { "Sandile", 50, 72, 5 },
    { "Krokorok", 60, 82, 5 },
    { "Krookodile", 95, 117, 5 },
    { "Darumaka", 70, 90, 5 },
    { "Darmanitan", 105, 140, 5 },
    { "Maractus", 75, 86, 5 },
    { "Dwebble", 50, 65, 5 },
    { "Crustle", 70, 105, 5 },
    { "Scraggy", 50, 75, 5 },
    { "Scrafty", 65, 90, 5 },
    { "Sigilyph", 72, 58, 5 },
    { "Yamask", 38, 30, 5 },
    { "Cofagrigus", 58, 50, 5 },
    { "Tirtouga", 54, 78, 5 },
    { "Carracosta", 74, 108, 5 },
    { "Archen", 55, 112, 5 },
    { "Archeops", 75, 140, 5 },
    { "Trubbish", 50, 50, 5 },
    { "Garbodor", 80, 95, 5 },
    { "Zorua", 40, 65, 5 },
    { "Zoroark", 60, 105, 5 },
    { "Minccino", 55, 50, 5 },
    { "Cinccino", 75, 95, 5 },
    { "Gothita", 45, 30, 5 },
    { "Gothorita", 60, 45, 5 },
    { "Gothitelle", 70, 55, 5 },
    { "Solosis", 45, 30, 5 },
    { "Duosion", 65, 40, 5 },
    { "Reuniclus", 110, 65, 5 },
    { "Ducklett", 62, 44, 5 },
    { "Swanna", 75, 87, 5 },
    { "Vanillite", 36, 50, 5 },
    { "Vanillish", 51, 65, 5 },
    { "Vanilluxe", 71, 95, 5 },
    { "Deerling", 60, 60, 5 },
    { "Sawsbuck", 80, 100, 5 },
    { "Emolga", 55, 75, 5 },
    { "Karrablast", 50, 75, 5 },
    { "Escavalier", 70, 135, 5 },
    { "Foongus", 69, 55, 5 },
    { "Amoonguss", 114, 85, 5 },
    { "Frillish", 55, 40, 5 },
    { "Jellicent", 100, 60, 5 },
    { "Alomomola", 165, 75, 5 },
    { "Joltik", 50, 47, 5 },
    { "Galvantula", 70, 77, 5 },
    { "Ferroseed", 44, 50, 5 },
    { "Ferrothorn", 74, 94, 5 },
    { "Klink", 40, 55, 5 },
    { "Klang", 60, 80, 5 },
    { "Klinklang", 60, 100, 5 },
    { "Tynamo", 35, 55, 5 },
    { "Eelektrik", 65, 85, 5 },
    { "Eelektross", 85, 115, 5 },
    { "Elgyem", 55, 55, 5 },
    { "Beheeyem", 75, 75, 5 },
    { "Litwick", 50, 30, 5 },
    { "Lampent", 60, 40, 5 },
    { "Chandelure", 60, 55, 5 },
    { "Axew", 46, 87, 5 },
    { "Fraxure", 66, 117, 5 },
    { "Haxorus", 76, 147, 5 },
    { "Cubchoo", 55, 70, 5 },
    { "Beartic", 95, 130, 5 },
    { "Cryogonal", 70, 50, 5 },
    { "Shelmet", 50, 40, 5 },
    { "Accelgor", 80, 70, 5 },
    { "Stunfisk", 109, 66, 5 },
    { "Mienfoo", 45, 85, 5 },
    { "Mienshao", 65, 125, 5 },
    { "Druddigon", 77, 120, 5 },
    { "Golett", 59, 74, 5 },
    { "Golurk", 89, 124, 5 },
    { "Pawniard", 45, 85, 5 },
    { "Bisharp", 65, 125, 5 },
    { "Bouffalant", 95, 110, 5 },
    { "Rufflet", 70, 83, 5 },
    { "Braviary", 100, 123, 5 },
    { "Vullaby", 70, 55, 5 },
    { "Mandibuzz", 110, 65, 5 },
    { "Heatmor", 85, 97, 5 },
    { "Durant", 58, 109, 5 },
    { "Deino", 52, 65, 5 },
    { "Zweilous", 72, 85, 5 },
    { "Hydreigon", 92, 105, 5 },
    { "Larvesta", 55, 85, 5 },
    { "Volcarona", 85, 60, 5 },
    { "Cobalion", 91, 90, 5 },
    { "Terrakion", 91, 129, 5 },
    { "Virizion", 91, 90, 5 },
    { "Tornadus", 79, 115, 5 },
    { "Thundurus", 79, 115, 5 },
    { "Reshiram", 100, 120, 5 },
    { "Zekrom", 100, 150, 5 },
    { "Landorus", 89, 125, 5 },
    { "Kyurem", 125, 130, 5 },
    { "Keldeo", 91, 72, 5 },
    { "Meloetta", 100, 77, 5 },
    { "Genesect", 71, 120, 5 },
    { "Chespin", 56, 61, 6 },
    { "Quilladin", 61, 78, 6 },
    { "Chesnaught", 88, 107, 6 },
    { "Fennekin", 40, 45, 6 },
    { "Braixen", 59, 59, 6 },
    { "Delphox", 75, 69, 6 },
    { "Froakie", 41, 56, 6 },
    { "Frogadier", 54, 63, 6 },
    { "Greninja", 72, 95, 6 },
    { "Bunnelby", 38, 36, 6 },
    { "Diggersby", 85, 56, 6 },
    { "Fletchling", 45, 50, 6 },
    { "Fletchinder", 62, 73, 6 },
    { "Talonflame", 78, 81, 6 },
    { "Scatterbug", 38, 35, 6 },
    { "Spewpa", 45, 22, 6 },
    { "Vivillon", 80, 52, 6 },
    { "Litleo", 62, 50, 6 },
    { "Pyroar", 86, 68, 6 },
    { "Flabebe", 44, 38, 6 },
    { "Floette", 54, 45, 6 },
    { "Florges", 78, 65, 6 },
    { "Skiddo", 66, 65, 6 },
    { "Gogoat", 123, 100, 6 },
    { "Pancham", 67, 82, 6 },
    { "Pangoro", 95, 124, 6 },
    { "Furfrou", 75, 80, 6 },
    { "Espurr", 62, 48, 6 },
    { "Meowstic", 74, 48, 6 },
    { "Honedge", 45, 80, 6 },
    { "Doublade", 59, 110, 6 },
    { "Aegislash", 60, 50, 6 },
    { "Spritzee", 78, 52, 6 },
    { "Aromatisse", 101, 72, 6 },
    { "Swirlix", 62, 48, 6 },
    { "Slurpuff", 82, 80, 6 },
    { "Inkay", 53, 54, 6 },
    { "Malamar", 86, 92, 6 },
    { "Binacle", 42, 52, 6 },
    { "Barbaracle", 72, 105, 6 },
    { "Skrelp", 50, 60, 6 },
    { "Dragalge", 65, 75, 6 },
    { "Clauncher", 50, 53, 6 },
    { "Clawitzer", 71, 73, 6 },
    { "Helioptile", 44, 38, 6 },
    { "Heliolisk", 62, 55, 6 },
    { "Tyrunt", 58, 89, 6 },
    { "Tyrantrum", 82, 121, 6 },
    { "Amaura", 77, 59, 6 },
    { "Aurorus", 123, 77, 6 },
    { "Sylveon", 95, 65, 6 },
    { "Hawlucha", 78, 92, 6 },
    { "Dedenne", 67, 58, 6 },
    { "Carbink", 50, 50, 6 },
    { "Goomy", 45, 50, 6 },
    { "Sliggoo", 68, 75, 6 },
    { "Goodra", 90, 100, 6 },
    { "Klefki", 57, 80, 6 },
    { "Phantump", 43, 70, 6 },
    { "Trevenant", 85, 110, 6 },
    { "Pumpkaboo", 49, 66, 6 },
    { "Gourgeist", 65, 90, 6 },
    { "Bergmite", 55, 69, 6 },
    { "Avalugg", 95, 117, 6 },
    { "Noibat", 40, 30, 6 },
    { "Noivern", 85, 70, 6 },
    { "Xerneas", 126, 131, 6 },
    { "Yveltal", 126, 131, 6 },
    { "Zygarde", 108, 100, 6 },
    { "Diancie", 50, 100, 6 },
    { "Hoopa", 80, 110, 6 },
    { "Volcanion", 80, 110, 6 },
    { "Rowlet", 68, 55, 7 },
    { "Dartrix", 78, 75, 7 },
    { "Decidueye", 78, 107, 7 },
    { "Litten", 45, 65, 7 },
    { "Torracat", 65, 85, 7 },
    { "Incineroar", 95, 115, 7 },
    { "Popplio", 50, 54, 7 },
    { "Brionne", 60, 69, 7 },
    { "Primarina", 80, 74, 7 },
    { "Pikipek", 35, 75, 7 },
    { "Trumbeak", 55, 85, 7 },
    { "Toucannon", 80, 120, 7 },
    { "Yungoos", 48, 70, 7 },
    { "Gumshoos", 88, 110, 7 },
    { "Grubbin", 47, 62, 7 },
    { "Charjabug", 57, 82, 7 },
    { "Vikavolt", 77, 70, 7 },
    { "Crabrawler", 47, 82, 7 },
    { "Crabominable", 97, 132, 7 },
    { "Oricorio", 75, 70, 7 },
    { "Cutiefly", 40, 45, 7 },
    { "Ribombee", 60, 55, 7 },
    { "Rockruff", 45, 65, 7 },
    { "Lycanroc", 75, 115, 7 },
    { "Wishiwashi", 45, 20, 7 },
    { "Mareanie", 50, 53, 7 },
    { "Toxapex", 50, 63, 7 },
    { "Mudbray", 70, 100, 7 },
    { "Mudsdale", 100, 125, 7 },
    { "Dewpider", 38, 40, 7 },
    { "Araquanid", 68, 70, 7 },
    { "Fomantis", 40, 55, 7 },
    { "Lurantis", 70, 105, 7 },
    { "Morelull", 40, 35, 7 },
    { "Shiinotic", 60, 45, 7 },
    { "Salandit", 48, 44, 7 },
    { "Salazzle", 68, 64, 7 },
    { "Stufful", 70, 75, 7 },
    { "Bewear", 120, 125, 7 },
    { "Bounsweet", 42, 30, 7 },
    { "Steenee", 52, 40, 7 },
    { "Tsareena", 72, 120, 7 },
    { "Comfey", 51, 52, 7 },
    { "Oranguru", 90, 60, 7 },
    { "Passimian", 100, 120, 7 },
    { "Wimpod", 25, 35, 7 },
    { "Golisopod", 75, 125, 7 },
    { "Sandygast", 55, 55, 7 },
    { "Palossand", 85, 75, 7 },
    { "Pyukumuku", 55, 60, 7 },
    { "TypeNull", 95, 95, 7 },
    { "Silvally", 95, 95, 7 },
    { "Minior", 60, 60, 7 },
    { "Komala", 65, 115, 7 },
    { "Turtonator", 60, 78, 7 },
    { "Togedemaru", 65, 98, 7 },
    { "Mimikyu", 55, 90, 7 },
    { "Bruxish", 68, 105, 7 },
    { "Drampa", 78, 60, 7 },
    { "Dhelmise", 70, 131, 7 },
    { "Jangmo-o", 45, 55, 7 },
    { "Hakamo-o", 55, 75, 7 },
    { "Kommo-o", 75, 110, 7 },
    { "TapuKoko", 70, 115, 7 },
    { "TapuLele", 70, 85, 7 },
    { "TapuBulu", 70, 130, 7 },
    { "TapuFini", 70, 75, 7 },
    { "Cosmog", 43, 29, 7 },
    { "Cosmoem", 43, 29, 7 },
    { "Solgaleo", 137, 137, 7 },
    { "Lunala", 137, 113, 7 },
    { "Nihilego", 109, 53, 7 },
    { "Buzzwole", 107, 139, 7 },
    { "Pheromosa", 71, 137, 7 },
    { "Xurkitree", 83, 89, 7 },
    { "Celesteela", 97, 101, 7 },
    { "Kartana", 59, 181, 7 },
    { "Guzzlord", 223, 101, 7 },
    { "Necrozma", 97, 107, 7 },
    { "Magearna", 80, 95, 7 },
    { "Marshadow", 90, 125, 7 },
    { "Poipole", 67, 73, 7 },
    { "Naganadel", 73, 73, 7 },
    { "Stakataka", 61, 131, 7 },
    { "Blacephalon", 53, 127, 7 },
    { "Zeraora", 88, 112, 7 },
    { "Meltan", 46, 65, 7 },
    { "Melmetal", 135, 143, 7 },
    { "Grookey", 50, 65, 8 },
    { "Thwackey", 70, 85, 8 },
    { "Rillaboom", 100, 125, 8 },
    { "Scorbunny", 50, 71, 8 },
    { "Raboot", 65, 86, 8 },
    { "Cinderace", 80, 116, 8 },
    { "Sobble", 50, 40, 8 },
    { "Drizzile", 65, 60, 8 },
    { "Inteleon", 70, 85, 8 },
    { "Skwovet", 70, 55, 8 },
    { "Greedent", 120, 95, 8 },
    { "Rookidee", 38, 47, 8 },
    { "Corvisquire", 68, 67, 8 },
    { "Corviknight", 98, 87, 8 },
    { "Blipbug", 25, 20, 8 },
    { "Dottler", 50, 35, 8 },
    { "Orbeetle", 60, 45, 8 },
    { "Nickit", 40, 28, 8 },
    { "Thievul", 70, 58, 8 },
    { "Gossifleur", 40, 40, 8 },
    { "Eldegoss", 60, 50, 8 },
    { "Wooloo", 42, 40, 8 },
    { "Dubwool", 72, 80, 8 },
    { "Chewtle", 50, 64, 8 },
    { "Drednaw", 90, 115, 8 },
    { "Yamper", 59, 45, 8 },
    { "Boltund", 69, 90, 8 },
    { "Rolycoly", 30, 40, 8 },
    { "Carkol", 80, 60, 8 },
    { "Coalossal", 110, 80, 8 },
    { "Applin", 40, 40, 8 },
    { "Flapple", 70, 110, 8 },
    { "Appletun", 110, 85, 8 },
    { "Silicobra", 52, 57, 8 },
    { "Sandaconda", 72, 107, 8 },
    { "Cramorant", 70, 85, 8 },
    { "Arrokuda", 41, 63, 8 },
    { "Barraskewda", 61, 123, 8 },
    { "Toxel", 40, 38, 8 },
    { "Toxtricity", 75, 98, 8 },
    { "Sizzlipede", 50, 65, 8 },
    { "Centiskorch", 100, 115, 8 },
    { "Clobbopus", 50, 68, 8 },
    { "Grapploct", 80, 118, 8 },
    { "Sinistea", 40, 45, 8 },
    { "Polteageist", 60, 65, 8 },
    { "Hatenna", 42, 30, 8 },
    { "Hattrem", 57, 40, 8 },
    { "Hatterene", 57, 90, 8 },
    { "Impidimp", 45, 45, 8 },
    { "Morgrem", 65, 60, 8 },
    { "Grimmsnarl", 95, 120, 8 },
    { "Obstagoon", 93, 90, 8 },
    { "Perrserker", 70, 110, 8 },
    { "Cursola", 60, 95, 8 },
    { "Sirfetchd", 62, 135, 8 },
    { "MrRime", 80, 85, 8 },
    { "Runerigus", 58, 95, 8 },
    { "Milcery", 45, 40, 8 },
    { "Alcremie", 65, 60, 8 },
    { "Falinks", 65, 100, 8 },
    { "Pincurchin", 48, 101, 8 },
    { "Snom", 30, 25, 8 },
    { "Frosmoth", 70, 65, 8 },
    { "Stonjourner", 100, 125, 8 },
    { "Eiscue", 75, 80, 8 },
    { "Indeedee", 60, 65, 8 },
    { "Morpeko", 58, 95, 8 },
    { "Cufant", 72, 80, 8 },
    { "Copperajah", 122, 130, 8 },
    { "Dracozolt", 90, 100, 8 },
    { "Arctozolt", 90, 100, 8 },
    { "Dracovish", 90, 90, 8 },
    { "Arctovish", 90, 90, 8 },
    { "Duraludon", 70, 95, 8 },
    { "Dreepy", 28, 60, 8 },
    { "Drakloak", 68, 80, 8 },
    { "Dragapult", 88, 120, 8 },
    { "Zacian", 92, 120, 8 },
    { "Zamazenta", 92, 120, 8 },
    { "Eternatus", 140, 85, 8 },
    { "Kubfu", 60, 90, 8 },
    { "Urshifu", 100, 130, 8 },
    { "Zarude", 105, 120, 8 },
    { "Regieleki", 80, 100, 8 },
    { "Regidrago", 200, 100, 8 },
    { "Glastrier", 100, 145, 8 },
    { "Spectrier", 100, 65, 8 },
    { "Calyrex", 100, 80, 8 },
    { "Wyrdeer", 103, 105, 8 },
    { "Kleavor", 70, 135, 8 },
    { "Ursaluna", 130, 140, 8 },
    { "Basculegion", 120, 112, 8 },
    { "Sneasler", 80, 130, 8 },
    { "Overqwil", 85, 115, 8 },
    { "Enamorus", 74, 115, 8 },
    { "Sprigatito", 40, 61, 9 },
    { "Floragato", 61, 80, 9 },
    { "Meowscarada", 76, 110, 9 },
    { "Fuecoco", 67, 45, 9 },
    { "Crocalor", 81, 55, 9 },
    { "Skeledirge", 104, 75, 9 },
    { "Quaxly", 55, 65, 9 },
    { "Quaxwell", 70, 85, 9 },
    { "Quaquaval", 85, 120, 9 },
    { "Lechonk", 54, 45, 9 },
    { "Oinkologne", 110, 100, 9 },
    { "Tarountula", 35, 41, 9 },
    { "Spidops", 60, 79, 9 },
    { "Nymble", 33, 46, 9 },
    { "Lokix", 71, 102, 9 },
    { "Pawmi", 45, 50, 9 },
    { "Pawmo", 60, 75, 9 },
    { "Pawmot", 70, 115, 9 },
    { "Tandemaus", 50, 50, 9 },
    { "Maushold", 74, 75, 9 },
    { "Fidough", 37, 55, 9 },
    { "Dachsbun", 57, 80, 9 },
    { "Smoliv", 41, 35, 9 },
    { "Dolliv", 52, 53, 9 },
    { "Arboliva", 78, 69, 9 },
    { "Squawkabilly", 82, 96, 9 },
    { "Nacli", 55, 55, 9 },
    { "Naclstack", 60, 60, 9 },
    { "Garganacl", 100, 100, 9 },
    { "Charcadet", 40, 50, 9 },
    { "Armarouge", 85, 60, 9 },
    { "Ceruledge", 75, 125, 9 },
    { "Tadbulb", 61, 31, 9 },
    { "Bellibolt", 109, 64, 9 },
    { "Wattrel", 40, 40, 9 },
    { "Kilowattrel", 70, 70, 9 },
    { "Maschiff", 60, 78, 9 },
    { "Mabosstiff", 80, 120, 9 },
    { "Shroodle", 40, 65, 9 },
    { "Grafaiai", 63, 95, 9 },
    { "Bramblin", 40, 65, 9 },
    { "Brambleghast", 55, 115, 9 },
    { "Toedscool", 40, 40, 9 },
    { "Toedscruel", 80, 70, 9 },
    { "Klawf", 70, 100, 9 },
    { "Capsakid", 50, 62, 9 },
    { "Scovillain", 65, 108, 9 },
    { "Rellor", 41, 50, 9 },
    { "Rabsca", 75, 50, 9 },
    { "Flittle", 30, 35, 9 },
    { "Espathra", 95, 60, 9 },
    { "Tinkatink", 50, 45, 9 },
    { "Tinkatuff", 65, 55, 9 },
    { "Tinkaton", 85, 75, 9 },
    { "Wiglett", 10, 55, 9 },
    { "Wugtrio", 35, 100, 9 },
    { "Bombirdier", 70, 103, 9 },
    { "Finizen", 70, 45, 9 },
    { "Palafin", 100, 70, 9 },
    { "Varoom", 45, 70, 9 },
    { "Revavroom", 80, 119, 9 },
    { "Cyclizar", 70, 95, 9 },
    { "Orthworm", 70, 85, 9 },
    { "Glimmet", 48, 35, 9 },
    { "Glimmora", 83, 55, 9 },
    { "Greavard", 50, 61, 9 },
    { "Houndstone", 72, 101, 9 },
    { "Flamigo", 82, 115, 9 },
    { "Cetoddle", 108, 68, 9 },
    { "Cetitan", 170, 113, 9 },
    { "Veluza", 90, 102, 9 },
    { "Dondozo", 150, 100, 9 },
    { "Tatsugiri", 68, 50, 9 },
    { "Annihilape", 110, 115, 9 },
    { "Clodsire", 130, 75, 9 },
    { "Farigiraf", 120, 90, 9 },
    { "Dudunsparce", 125, 100, 9 },
    { "Kingambit", 100, 135, 9 },
    { "GreatTusk", 115, 131, 9 },
    { "ScreamTail", 115, 65, 9 },
    { "BruteBonnet", 111, 127, 9 },
    { "FlutterMane", 55, 55, 9 },
    { "SlitherWing", 85, 135, 9 },
    { "SandyShocks", 85, 81, 9 },
    { "IronTreads", 90, 112, 9 },
    { "IronBundle", 56, 80, 9 },
    { "IronHands", 154, 140, 9 },
    { "IronJugulis", 94, 80, 9 },
    { "IronMoth", 80, 70, 9 },
    { "IronThorns", 100, 134, 9 },
    { "Frigibax", 65, 75, 9 },
    { "Arctibax", 90, 95, 9 },
    { "Baxcalibur", 115, 145, 9 },
    { "Gimmighoul", 45, 30, 9 },
    { "Gholdengo", 87, 60, 9 },
    { "WoChien", 85, 85, 9 },
    { "ChienPao", 80, 120, 9 },
    { "TingLu", 155, 110, 9 },
    { "ChiYu", 55, 80, 9 },
    { "RoaringMoon", 105, 139, 9 },
    { "IronValiant", 74, 130, 9 },
    { "Koraidon", 100, 135, 9 },
    { "Miraidon", 100, 85, 9 },
    { "WalkingWake", 99, 83, 9 },
    { "IronLeaves", 90, 130, 9 },
    { "Dipplin", 80, 80, 9 },
    { "Poltchageist", 40, 45, 9 },
    { "Sinistcha", 71, 60, 9 },
    { "Okidogi", 88, 128, 9 },
    { "Munkidori", 88, 75, 9 },
    { "Fezandipiti", 88, 91, 9 },
    { "Ogerpon", 80, 120, 9 },
    { "Archaludon", 90, 105, 9 },
    { "Hydrapple", 106, 80, 9 },
    { "GougingFire", 105, 115, 9 },
    { "RagingBolt", 125, 73, 9 },
    { "IronBoulder", 90, 120, 9 },
    { "IronCrown", 90, 72, 9 },
    { "Terapagos", 90, 65, 9 },
    { "Pecharunt", 88, 88, 9 }
};

//this will generate a random pokemon depending on gyms beaten
//need a way to track gyms beaten and use that to determine which pokemon can be generated
//need to make sure not to generate evoved forms of pokemon
//need a list of pokemon that can be generated at each gym level
//need to make a list of pokemon that evolve from what pokemon
//need to make a list of pokemon that evolve at what gym level

vector <string> pool;

void generatePokemon() {
    //generate a random pokemon based on gyms beaten
    //use the pokemonlist array to randomly select a pokemon
    //need to make sure not to generate evoved forms of pokemon
    //need to make sure to only generate pokemon that can be found at the current gym level
    switch (gym_level) {
	case 0: // starter pokemon
        pool = { "Charmander", "Squirtle", "Bulbasaur" };
        break;
    case 1: // beginning wilds
        pool = { "Pidgey", "Rattata", "Magikarp" };
        break;
    case 2: // after Brock
        pool = { "Weedle", "Caterpie", "Pikachu", "Nidoran (F)", "Diglett" };
        break;
    case 3: // after Misty
        pool = { "Spearow", "Psyduck", "Slowpoke", "Goldeen", "Mankey", "Sandshrew", "Poliwag", "Jigglypuff", "Zubat", "Geodude", "Onix", "Paras" };
        break;
    case 4: // after rival battle 2 (mix of earlier)
        pool = { "Pidgey", "Rattata", "Weedle", "Caterpie", "Pikachu", "Diglett", "Spearow", "Psyduck", "Zubat", "Geodude" };
        break;
    case 5: // after Lt. Surge
        pool = { "Voltorb", "Magnemite", "Electabuzz", "Muk" };
        break;
    case 6: // after Erika
        pool = { "Gastly", "Machop", "Cubone", "Hitmonlee", "Hitmonchan", "Oddish", "Bellsprout", "Krabby", "Horsea" };
        break;
    case 7: // after Koga (poison-themed)
        pool = { "Koffing", "Weezing", "Zubat", "Golbat", "Venonat", "Venomoth" };
        break;
    case 8: // after rival battle 3
        pool = { "Growlithe", "Abra", "Machop", "Bellsprout", "Ponyta", "Oddish" };
        break;
    case 9: // after Sabrina
        pool = { "Abra", "Drowzee", "Krabby", "Cubone", "Ponyta" };
        break;
    case 10: // after rival battle 4
        pool = { "Geodude", "Graveler", "Onix", "Shellder", "Krabby" };
        break;
    case 11: // after Blaine
        pool = { "Magmar", "Electabuzz", "Pinsir", "Tauros", "Scyther" };
        break;
    case 12: // after rival battle 5
        pool = { "Omanyte", "Kabuto", "Aerodactyl", "Dratini", "Horsea" };
        break;
    case 13: // after Giovanni
        pool = { "Rhydon", "Gyarados", "Lapras", "Snorlax", "Gengar" };
        break;
    default: // late game / fallback
        pool = { "Rattata", "Pidgey", "Zubat" };
        break;
    }
};

void riddle1() {
	//first gym leader riddle
	//mulitple choice question with 4 options
    //if wrong they get a second chance
	//if wrong agion they get a punishment
	cout << "how many pokemon are there?" << endl;
	cout << "a. 151" << endl;
	cout << "b. like 5" << endl;
	cout << "c. 1 billion lions" << endl;
	cout << "d. 1025" << endl;
	if (cin.get() == 'a') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'a') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            //punishment
        }

};

void riddle2() {
    //this is the riddle for the second gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
	cout << "what is the 37th pokemon?" << endl;
	cout << "a. Jigglypuff" << endl;
	cout << "b. Ninetales" << endl;
	cout << "c. Vulpix" << endl;
	cout << "d. Wigglytuff" << endl;
    if (cin.get() == 'c') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'c') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            //punishment
		}
};

void riddle3() {
    //this is the riddle for the third gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
	cout << "how do you evolve eevee into flareon?" << endl;
	cout << "a. use a water stone" << endl;
	cout << "b. level up with high friendship during the day" << endl;
	cout << "c. level up with high friendship during the night" << endl;
    cout << "d. use a fire stone " << endl;
    if (cin.get() == 'd') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'd') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            //punishment
		}
};

void riddle4() {
    //this is the riddle for the fourth gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
	cout << "how many dragonites does lance have?" << endl;
	cout << "a. 1" << endl;
	cout << "b. 2" << endl;
    cout << "c. 3" << endl;
    cout << "d. 4" << endl;
    if (cin.get() == 'c') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'c') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            //punishment
		}
};

void riddle5() {
    //this is the riddle for the fifth gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
	cout << "what is the best sorce of information for pokemon?" << endl;
	cout << "a. the pokedex" << endl;
	cout << "b. wikipedia" << endl;
    cout << "c. the pokemon anime" << endl;
    cout << "d. the internet" << endl;
    if (cin.get() == 'b') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'b') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            //punishment
		}
};

void riddle6() {
    //this is the riddle for the sixth gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
	cout << "what is the capital of the pokemon world?" << endl;
	cout << "a. pallet town" << endl;
    cout << "b. cerulean city" << endl;
    cout << "c. indigo plateau" << endl;
    cout << "d. lavender town" << endl;
    if (cin.get() == 'c') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'c') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            //punishment
		}
};

void riddle7() {
    //this is the riddle for the seventh gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //need to make sure to give the player a reward if they get it right
	cout << "what is the name of the pokemon that can only be caught in the safari zone?" << endl;
    cout << "a. scyther" << endl;
    cout << "b. pinsir" << endl;
    cout << "c. tauros" << endl;
    cout << "d. magikarp" << endl;
    if (cin.get() == 'c') {
        cout << "correct!" << endl;
        //reward
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'c') {
            cout << "correct!" << endl;
            //reward
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            //punishment
		}
};

void riddle8() {
    //this is the riddle for the eighth gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
	cout << "how many pokemon are in the original 151?" << endl;
    cout << "a. 150" << endl;
    cout << "b. 151" << endl;
    cout << "c. 152" << endl;
    cout << "d. 153" << endl;
    if (cin.get() == 'b') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'b') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            //punishment
		}
};

int main()
{
    struct PokemonInfo {
        string name;
        int hp;
        int attk;
        int lvl;
        string move1;
        string move2;
        string move3;
        string move4;
    };
    Battle bat;
    string name = "", pokemon1, pokemon2, pokemon3, pokemon4;
    int attk = 0, lvl = 1, hp = 1;

    vector<vector<string>> pokedex = {
{"Bulbasaur","45","49","VineWhip","Tackle","LeechSeed","Growl"},
{"Ivysaur","60","61","RazorLeaf","VineWhip","SleepPowder","PoisonPowder"},
{"Venusaur","80","81","SolarBeam","RazorLeaf","SleepPowder","SludgeBomb"},
{"Charmander","39","51","Ember","Scratch","Smokescreen","MetalClaw"},
{"Charmeleon","58","64","Flamethrower","Ember","Slash","Smokescreen"},
{"Charizard","78","84","Flamethrower","Fly","DragonClaw","Slash"},
{"Squirtle","44","48","WaterGun","Tackle","TailWhip","Bubble"},
{"Wartortle","59","63","WaterGun","Bite","RapidSpin","Withdraw"},
{"Blastoise","79","83","HydroPump","Surf","IceBeam","Bite"},
{"Caterpie","45","30","Tackle","StringShot","BugBite","Snore"},
{"Metapod","50","10","Harden","Tackle","StringShot","BugBite"},
{"Butterfree","60","45","Confusion","SleepPowder","Gust","Psychic"},
{"Weedle","40","35","PoisonSting","StringShot","BugBite","Tackle"},
{"Kakuna","45","15","Harden","PoisonSting","StringShot","BugBite"},
{"Beedrill","65","90","Twineedle","FuryAttack","PoisonJab","DrillRun"},
{"Pidgey","40","45","Gust","Tackle","SandAttack","QuickAttack"},
{"Pidgeotto","63","60","WingAttack","QuickAttack","Whirlwind","Gust"},
{"Pidgeot","83","80","WingAttack","Fly","QuickAttack","Hurricane"},
{"Rattata","30","56","Tackle","QuickAttack","HyperFang","Bite"},
{"Raticate","55","81","HyperFang","SuperFang","Crunch","QuickAttack"},
{"Spearow","40","60","Peck","Growl","FuryAttack","Leer"},
{"Fearow","65","90","DrillPeck","FuryAttack","Agility","Leer"},
{"Ekans","35","60","Wrap","Bite","PoisonSting","Glare"},
{"Arbok","60","85","Crunch","PoisonFang","Glare","Screech"},
{"Pikachu","35","55","Thunderbolt","QuickAttack","ThunderWave","IronTail"},
{"Raichu","60","90","Thunderbolt","ThunderPunch","QuickAttack","IronTail"},
{"Sandshrew","50","75","Dig","Slash","SandAttack","DefenseCurl"},
{"Sandslash","75","100","Earthquake","Slash","RockSlide","SwordsDance"},
{"NidoranF","55","47","PoisonSting","Scratch","TailWhip","DoubleKick"},
{"Nidorina","70","61","PoisonSting","Bite","DoubleKick","HelpingHand"},
{"Nidoqueen","90","91","Earthquake","SludgeBomb","IceBeam","BodySlam"},
{"NidoranM","46","57","Peck","DoubleKick","Leer","PoisonSting"},
{"Nidorino","61","71","PoisonJab","DoubleKick","HornAttack","FuryAttack"},
{"Nidoking","81","101","Earthquake","SludgeBomb","Megahorn","IceBeam"},
{"Clefairy","70","45","Sing","DoubleSlap","Metronome","Moonlight"},
{"Clefable","95","70","Moonblast","Flamethrower","Thunderbolt","SoftBoiled"},
{"Vulpix","38","41","Ember","QuickAttack","ConfuseRay","WillOWisp"},
{"Ninetales","73","76","Flamethrower","FireBlast","ConfuseRay","NastyPlot"},
{"Jigglypuff","115","45","Sing","Pound","Rollout","DefenseCurl"},
{"Wigglytuff","140","70","BodySlam","PlayRough","ShadowBall","Thunderbolt"},
{"Zubat","40","45","Bite","WingAttack","ConfuseRay","Supersonic"},
{"Golbat","75","80","Bite","WingAttack","ConfuseRay","AirCutter"},
{"Oddish","45","50","Absorb","SleepPowder","PoisonPowder","StunSpore"},
{"Gloom","60","65","MegaDrain","SleepPowder","PoisonPowder","Acid"},
{"Vileplume","75","80","SolarBeam","GigaDrain","SleepPowder","SludgeBomb"},
{"Paras","35","70","Scratch","LeechLife","Spore","StunSpore"},
{"Parasect","60","95","Slash","Spore","GigaDrain","XScissor"},
{"Venonat","60","55","Confusion","Psybeam","StunSpore","Supersonic"},
{"Venomoth","70","65","Psychic","BugBuzz","SleepPowder","QuiverDance"},
{"Diglett","10","55","Dig","Magnitude","SandAttack","RockTomb"},
{"Dugtrio","35","100","Earthquake","RockSlide","Sandstorm","SuckerPunch"},
{"Meowth","40","45","Scratch","Bite","PayDay","Screech"},
{"Persian","65","70","Slash","Bite","Swift","Screech"},
{"Psyduck","50","51","WaterGun","Confusion","Disable","Screech"},
{"Golduck","80","81","Surf","Psychic","IceBeam","CalmMind"},
{"Mankey","40","80","KarateChop","LowKick","FocusEnergy","SeismicToss"},
{"Primeape","65","105","CloseCombat","RockSlide","UTurn","FocusEnergy"},
{"Growlithe","55","70","Ember","Bite","Roar","FlameWheel"},
{"Arcanine","90","110","Flamethrower","ExtremeSpeed","Crunch","FireBlast"},
{"Poliwag","40","50","Bubble","WaterGun","Hypnosis","DoubleSlap"},
{"Poliwhirl","65","65","WaterGun","Hypnosis","BodySlam","MudShot"},
{"Poliwrath","90","95","Surf","DynamicPunch","IcePunch","BulkUp"},
{"Abra","15","10","Teleport","Confusion","Psychic","Reflect"},
{"Kadabra","40","35","Psychic","Confusion","Recover","Disable"},
{"Alakazam","55","50","Psychic","CalmMind","Recover","ShadowBall"},
{"Machop","70","80","KarateChop","LowKick","FocusEnergy","BulkUp"},
{"Machoke","80","100","CrossChop","Submission","BulkUp","RockSlide"},
{"Machamp","90","130","DynamicPunch","CrossChop","BulkUp","StoneEdge"},
{"Bellsprout","50","75","VineWhip","Growth","SleepPowder","Acid"},
{"Weepinbell","65","90","RazorLeaf","SleepPowder","Acid","Slam"},
{"Victreebel","80","105","SolarBeam","SludgeBomb","SleepPowder","RazorLeaf"},
{"Tentacool","40","40","PoisonSting","BubbleBeam","Supersonic","Acid"},
{"Tentacruel","80","70","Surf","SludgeBomb","IceBeam","Barrier"},
{"Geodude","40","80","RockThrow","Magnitude","DefenseCurl","Rollout"},
{"Graveler","55","95","RockSlide","Magnitude","SelfDestruct","Earthquake"},
{"Golem","80","110","Earthquake","StoneEdge","Explosion","RockBlast"},
{"Ponyta","50","85","Ember","Stomp","FireSpin","FlameWheel"},
{"Rapidash","65","100","Flamethrower","Megahorn","Agility","FireSpin"},
{"Slowpoke","90","65","WaterGun","Confusion","Yawn","SlackOff"},
{"Slowbro","95","75","Surf","Psychic","SlackOff","Amnesia"},
{"Magnemite","15","35","ThunderShock","SonicBoom","ThunderWave","Spark"},
{"Magneton","50","60","Thunderbolt","ThunderWave","FlashCannon","TriAttack"},
{"Farfetchd","51","65","Peck","Slash","FuryCutter","SwordsDance"},
{"Doduo","35","85","Peck","FuryAttack","QuickAttack","TriAttack"},
{"Dodrio","60","110","DrillPeck","TriAttack","Agility","JumpKick"},
{"Seel","65","45","Headbutt","AuroraBeam","Rest","IceShard"},
{"Dewgong","90","70","IceBeam","Surf","AuroraBeam","Rest"},
{"Grimer","80","80","Sludge","PoisonGas","Minimize","MudSlap"},
{"Muk","105","105","SludgeBomb","Minimize","Curse","Toxic"},
{"Shellder","30","65","Tackle","IceShard","Clamp","Supersonic"},
{"Cloyster","50","95","IceBeam","Surf","Spikes","ShellSmash"},
{"Gastly","30","35","Lick","Hypnosis","NightShade","ConfuseRay"},
{"Haunter","45","50","ShadowBall","Hypnosis","Curse","ConfuseRay"},
{"Gengar","60","65","ShadowBall","SludgeBomb","Hypnosis","Thunderbolt"},
{"Onix","35","45","RockThrow","Bind","RockTomb","Sandstorm"},
{"Drowzee","60","48","Confusion","Hypnosis","Headbutt","Psybeam"},
{"Hypno","85","73","Psychic","Hypnosis","DreamEater","CalmMind"},
{"Krabby","30","105","Bubble","Crabhammer","ViceGrip","Stomp"},
{"Kingler","55","130","Crabhammer","XScissor","SwordsDance","Stomp"},
{"Voltorb","40","30","Spark","SonicBoom","SelfDestruct","LightScreen"},
{"Electrode","60","50","Thunderbolt","Explosion","LightScreen","Reflect"},
{"Exeggcute","60","40","Confusion","SleepPowder","LeechSeed","Reflect"},
{"Exeggutor","95","95","Psychic","SolarBeam","SleepPowder","Explosion"},
{"Cubone","50","50","BoneClub","Headbutt","FocusEnergy","Bonemerang"},
{"Marowak","60","80","Bonemerang","Earthquake","SwordsDance","RockSlide"},
{"Hitmonlee","50","110","HighJumpKick","MegaKick","BlazeKick","FocusEnergy"},
{"Hitmonchan","50","105","FirePunch","IcePunch","ThunderPunch","MachPunch"},
{"Lickitung","90","55","Lick","Slam","Disable","BodySlam"},
{"Koffing","40","65","Smog","Sludge","SelfDestruct","Toxic"},
{"Weezing","65","90","SludgeBomb","Explosion","Toxic","Flamethrower"},
{"Rhyhorn","80","85","HornAttack","Stomp","RockBlast","Bulldoze"},
{"Rhydon","105","130","Earthquake","Megahorn","StoneEdge","RockSlide"},
{"Chansey","150","5","SoftBoiled","SeismicToss","ThunderWave","Toxic"},
{"Tangela","65","55","VineWhip","SleepPowder","StunSpore","GigaDrain"},
{"Kangaskhan","105","95","MegaPunch","Crunch","Earthquake","FakeOut"},
{"Horsea","30","40","Bubble","Smokescreen","Twister","WaterPulse"},
{"Seadra","55","65","Surf","DragonBreath","Agility","IceBeam"},
{"Goldeen","45","67","Peck","HornAttack","WaterPulse","Agility"},
{"Seaking","80","91","Waterfall","Megahorn","HornDrill","AquaTail"},
{"Staryu","30","45","WaterGun","RapidSpin","Recover","Swift"},
{"Starmie","60","75","Surf","Psychic","Thunderbolt","Recover"},
{"MrMime","40","45","Psychic","Barrier","Reflect","LightScreen"},
{"Scyther","70","110","Slash","WingAttack","SwordsDance","XScissor"},
{"Jynx","65","50","IceBeam","Psychic","LovelyKiss","Blizzard"},
{"Electabuzz","65","83","ThunderPunch","Thunderbolt","LightScreen","Psychic"},
{"Magmar","65","95","Flamethrower","FirePunch","ConfuseRay","SunnyDay"},
{"Pinsir","65","115","XScissor","SwordsDance","ViceGrip","RockSlide"},
{"Tauros","75","100","BodySlam","Earthquake","Thrash","ZenHeadbutt"},
{"Magikarp","10","10","Splash","Tackle","Flail","Bounce"},
{"Gyarados","95","115","Waterfall","Crunch","DragonDance","IceFang"},
{"Lapras","130","85","Surf","IceBeam","Thunderbolt","ConfuseRay"},
{"Ditto","48","48","Transform","Rest","SleepTalk","Substitute"},
{"Eevee","55","55","QuickAttack","Bite","SandAttack","Swift"},
{"Vaporeon","130","65","Surf","IceBeam","AuroraBeam","Wish"},
{"Jolteon","65","65","Thunderbolt","ThunderWave","DoubleKick","Agility"},
{"Flareon","65","130","Flamethrower","FireBlast","QuickAttack","Bite"},
{"Porygon","65","60","TriAttack","Recover","Thunderbolt","IceBeam"},
{"Omanyte","35","40","WaterGun","RockThrow","AncientPower","Bite"},
{"Omastar","70","60","Surf","RockSlide","AncientPower","IceBeam"},
{"Kabuto","30","80","Scratch","AquaJet","AncientPower","MudShot"},
{"Kabutops","60","115","Slash","Waterfall","AncientPower","SwordsDance"},
{"Aerodactyl","80","105","RockSlide","WingAttack","Crunch","Fly"},
{"Snorlax","160","110","BodySlam","Rest","SleepTalk","Earthquake"},
{"Articuno","90","85","IceBeam","Fly","Reflect","Agility"},
{"Zapdos","90","90","Thunderbolt","DrillPeck","Agility","LightScreen"},
{"Moltres","90","100","Flamethrower","Fly","SunnyDay","FireBlast"},
{"Dratini","41","64","DragonBreath","ThunderWave","Slam","Agility"},
{"Dragonair","61","84","DragonBreath","Surf","ThunderWave","Agility"},
{"Dragonite","91","134","DragonClaw","Fly","Thunderbolt","IceBeam"},
{"Mewtwo","106","110","Psychic","CalmMind","Recover","IceBeam"},
{"Mew","100","100","Psychic","Transform","Metronome","SoftBoiled"},
{"Chikorita","45","49","RazorLeaf","Growl","Reflect","PoisonPowder"},
{"Bayleef","60","61","RazorLeaf","Reflect","PoisonPowder","Synthesis"},
{"Meganium","80","81","SolarBeam","RazorLeaf","Reflect","Synthesis"},
{"Cyndaquil","39","51","Ember","QuickAttack","Smokescreen","FlameWheel"},
{"Quilava","58","64","FlameWheel","QuickAttack","Smokescreen","Swift"},
{"Typhlosion","78","84","Flamethrower","QuickAttack","Swift","FireBlast"},
{"Totodile","50","65","WaterGun","Bite","Leer","Rage"},
{"Croconaw","65","80","Bite","WaterGun","Rage","ScaryFace"},
{"Feraligatr","85","105","Surf","Crunch","IceFang","DragonDance"},
{"Sentret","35","46","Tackle","QuickAttack","DefenseCurl","FurySwipes"},
{"Furret","85","76","QuickAttack","Slam","Amnesia","BatonPass"},
{"Hoothoot","60","30","Peck","Hypnosis","Growl","Reflect"},
{"Noctowl","100","50","AirSlash","Hypnosis","Reflect","Psychic"},
{"Ledyba","40","10","Tackle","Supersonic","Reflect","LightScreen"},
{"Ledian","55","35","CometPunch","LightScreen","Reflect","BatonPass"},
{"Spinarak","40","60","PoisonSting","StringShot","NightShade","ScaryFace"},
{"Ariados","70","90","SludgeBomb","SpiderWeb","NightSlash","SuckerPunch"},
{"Crobat","85","90","CrossPoison","AirSlash","ConfuseRay","Bite"},
{"Chinchou","75","38","Bubble","ThunderShock","Supersonic","ConfuseRay"},
{"Lanturn","115","58","Surf","Thunderbolt","ConfuseRay","IceBeam"},
{"Pichu","10","40","ThunderShock","Charm","TailWhip","SweetKiss"},
{"Cleffa","50","15","Pound","Charm","Sing","SweetKiss"},
{"Igglybuff","90","30","Pound","Sing","DefenseCurl","Charm"},
{"Togepi","35","10","Metronome","Charm","SweetKiss","AncientPower"},
{"Togetic","55","40","AirSlash","Metronome","AncientPower","Safeguard"},
{"Natu","40","50","Peck","Confusion","NightShade","Teleport"},
{"Xatu","65","75","Psychic","AirSlash","ConfuseRay","FutureSight"},
{"Mareep","55","40","ThunderShock","Growl","ThunderWave","CottonSpore"},
{"Flaaffy","70","55","ThunderShock","ThunderWave","CottonSpore","TakeDown"},
{"Ampharos","90","75","Thunderbolt","ThunderWave","PowerGem","SignalBeam"},
{"Bellossom","75","80","GigaDrain","SleepPowder","StunSpore","QuiverDance"},
{"Marill","70","10","Bubble","Rollout","TailWhip","DefenseCurl"},
{"Azumarill","100","50","Waterfall","PlayRough","AquaJet","BellyDrum"},
{"Sudowoodo","70","100","RockSlide","Mimic","Counter","SuckerPunch"},
{"Politoed","90","75","Surf","Hypnosis","PerishSong","IceBeam"},
{"Hoppip","35","35","Tackle","StunSpore","SleepPowder","LeechSeed"},
{"Skiploom","55","45","MegaDrain","SleepPowder","StunSpore","LeechSeed"},
{"Jumpluff","75","55","GigaDrain","SleepPowder","LeechSeed","Acrobatics"},
{"Aipom","55","70","Scratch","Swift","Agility","BatonPass"},
{"Sunkern","30","30","Absorb","Growth","MegaDrain","SunnyDay"},
{"Sunflora","75","75","SolarBeam","GigaDrain","SunnyDay","Growth"},
{"Yanma","65","65","WingAttack","Supersonic","QuickAttack","DoubleTeam"},
{"Wooper","55","45","WaterGun","MudShot","TailWhip","Slam"},
{"Quagsire","95","85","Surf","Earthquake","Amnesia","IcePunch"},
{"Espeon","65","65","Psychic","CalmMind","ShadowBall","MorningSun"},
{"Umbreon","95","65","FoulPlay","ConfuseRay","Moonlight","Toxic"},
{"Murkrow","60","85","Peck","Pursuit","NightShade","Haze"},
{"Slowking","95","75","Surf","Psychic","SlackOff","Amnesia"},
{"Misdreavus","60","60","ShadowBall","ConfuseRay","MeanLook","PainSplit"},
{"Unown","48","71","HiddenPower","HiddenPower","HiddenPower","HiddenPower"},
{"Wobbuffet","190","33","Counter","MirrorCoat","Safeguard","DestinyBond"},
{"Girafarig","70","80","Psychic","Crunch","Agility","BatonPass"},
{"Pineco","50","65","Tackle","SelfDestruct","Protect","BugBite"},
{"Forretress","75","90","Spikes","RapidSpin","Explosion","GyroBall"},
{"Dunsparce","100","70","Headbutt","Glare","Roost","AncientPower"},
{"Gligar","65","75","Slash","SandAttack","QuickAttack","Acrobatics"},
{"Steelix","75","85","Earthquake","IronTail","RockSlide","Sandstorm"},
{"Snubbull","60","80","Bite","Charm","Headbutt","ScaryFace"},
{"Granbull","90","110","PlayRough","Crunch","ThunderFang","CloseCombat"},
{"Qwilfish","65","95","Waterfall","PoisonJab","Spikes","ToxicSpikes"},
{"Scizor","70","130","BulletPunch","XScissor","SwordsDance","IronHead"},
{"Shuckle","10","10","Wrap","Toxic","Protect","Rest"},
{"Heracross","80","115","Megahorn","CloseCombat","RockSlide","SwordsDance"},
{"Sneasel","55","95","IceShard","Slash","FaintAttack","Agility"},
{"Teddiursa","60","80","Scratch","Lick","FurySwipes","Rest"},
{"Ursaring","90","130","Slash","CloseCombat","Crunch","Rest"},
{"Slugma","40","40","Ember","RockThrow","Harden","Amnesia"},
{"Magcargo","50","50","Flamethrower","RockSlide","Recover","Amnesia"},
{"Swinub","50","50","PowderSnow","MudSlap","Endure","IcyWind"},
{"Piloswine","100","100","IceFang","Earthquake","TakeDown","Blizzard"},
{"Corsola","55","55","BubbleBeam","Recover","RockBlast","MirrorCoat"},
{"Remoraid","35","65","WaterGun","LockOn","Psybeam","AuroraBeam"},
{"Octillery","75","105","Surf","Octazooka","IceBeam","Flamethrower"},
{"Delibird","45","55","Present","IceShard","QuickAttack","AerialAce"},
{"Mantine","85","40","Surf","AirSlash","ConfuseRay","IceBeam"},
{"Skarmory","65","80","SteelWing","Fly","Spikes","Roost"},
{"Houndour","45","60","Ember","Bite","Smog","Roar"},
{"Houndoom","75","90","Flamethrower","Crunch","NastyPlot","DarkPulse"},
{"Kingdra","75","95","Surf","DragonBreath","IceBeam","RainDance"},
{"Phanpy","90","60","Tackle","Rollout","DefenseCurl","TakeDown"},
{"Donphan","90","110","Earthquake","Rollout","RapidSpin","StoneEdge"},
{"Porygon1","85","80","TriAttack","Recover","Thunderbolt","IceBeam"},
{"Stantler","73","95","Stomp","Hypnosis","ConfuseRay","ShadowBall"},
{"Smeargle","55","10","Sketch","Sketch","Sketch","Sketch"},
{"Tyrogue","35","35","Tackle","FocusEnergy","Counter","FakeOut"},
{"Hitmontop","50","95","RapidSpin","CloseCombat","Counter","Detect"},
{"Smoochum","45","30","PowderSnow","Lick","SweetKiss","Confusion"},
{"Elekid","45","63","ThunderPunch","QuickAttack","Leer","Swift"},
{"Magby","45","75","Ember","Smokescreen","FirePunch","ConfuseRay"},
{"Miltank","95","80","BodySlam","MilkDrink","Rollout","HealBell"},
{"Blissey","155","10","SoftBoiled","SeismicToss","ThunderWave","Toxic"},
{"Raikou","90","85","Thunderbolt","CalmMind","Reflect","Extrasensory"},
{"Entei","115","115","Flamethrower","FireBlast","SunnyDay","Crunch"},
{"Suicune","100","75","Surf","CalmMind","IceBeam","Rest"},
{"Larvitar","50","64","Bite","RockSlide","Screech","Sandstorm"},
{"Pupitar","70","84","RockSlide","Screech","Sandstorm","Thrash"},
{"Tyranitar","100","134","Crunch","StoneEdge","Earthquake","DragonDance"},
{"Lugia","106","90","Aeroblast","Psychic","Recover","CalmMind"},
{"Ho-Oh","106","130","SacredFire","Fly","SunnyDay","Recover"},
{"Celebi","100","100","Psychic","GigaDrain","Recover","HealBell"},
{"Treecko","40","45","Absorb","QuickAttack","Pursuit","Screech"},
{"Grovyle","50","65","LeafBlade","QuickAttack","FuryCutter","Screech"},
{"Sceptile","70","85","LeafBlade","DragonClaw","QuickAttack","Agility"},
{"Torchic","45","60","Ember","Scratch","FocusEnergy","Peck"},
{"Combusken","60","85","DoubleKick","Ember","Peck","BulkUp"},
{"Blaziken","80","120","BlazeKick","SkyUppercut","BulkUp","BraveBird"},
{"Mudkip","50","70","WaterGun","Tackle","MudSlap","Protect"},
{"Marshtomp","70","85","WaterGun","MudShot","MudSlap","Protect"},
{"Swampert","100","110","Surf","Earthquake","IceBeam","Protect"},
{"Poochyena","35","55","Tackle","Bite","Howl","SandAttack"},
{"Mightyena","70","90","Crunch","TakeDown","Howl","SandAttack"},
{"Zigzagoon","38","30","Tackle","Headbutt","TailWhip","SandAttack"},
{"Linoone","78","70","Slash","Headbutt","BellyDrum","ShadowBall"},
{"Wurmple","45","45","Tackle","StringShot","PoisonSting","BugBite"},
{"Silcoon","50","35","Harden","Tackle","StringShot","BugBite"},
{"Beautifly","60","70","Gust","Absorb","StunSpore","SilverWind"},
{"Cascoon","50","35","Harden","Tackle","StringShot","BugBite"},
{"Dustox","60","50","Gust","Confusion","PoisonPowder","SilverWind"},
{"Lotad","40","30","Absorb","Bubble","Growl","Astonish"},
{"Lombre","60","50","WaterGun","FakeOut","NaturePower","Astonish"},
{"Ludicolo","80","70","Surf","GigaDrain","RainDance","IceBeam"},
{"Seedot","40","40","Bide","Growth","NaturePower","Tackle"},
{"Nuzleaf","70","70","RazorLeaf","FakeOut","NaturePower","FaintAttack"},
{"Shiftry","90","100","LeafBlade","FaintAttack","Extrasensory","SwordsDance"},
{"Taillow","40","55","Peck","QuickAttack","FocusEnergy","WingAttack"},
{"Swellow","60","85","AerialAce","QuickAttack","DoubleTeam","Facade"},
{"Wingull","40","30","WaterGun","WingAttack","Supersonic","Mist"},
{"Pelipper","60","50","Surf","Fly","Protect","IceBeam"},
{"Ralts","28","25","Confusion","Growl","DoubleTeam","Teleport"},
{"Kirlia","38","35","Confusion","DoubleTeam","CalmMind","Psychic"},
{"Gardevoir","68","65","Psychic","CalmMind","Thunderbolt","ShadowBall"},
{"Surskit","40","30","Bubble","QuickAttack","SweetScent","WaterSport"},
{"Masquerain","70","60","AirSlash","BugBuzz","Intimidate","QuiverDance"},
{"Shroomish","60","40","Absorb","StunSpore","LeechSeed","Headbutt"},
{"Breloom","60","130","MachPunch","SkyUppercut","Spore","SwordsDance"},
{"Slakoth","60","60","Scratch","Yawn","Encore","SlackOff"},
{"Vigoroth","80","80","Slash","Encore","Counter","FurySwipes"},
{"Slaking","150","160","HyperBeam","SlackOff","ShadowBall","Earthquake"},
{"Nincada","31","45","Scratch","FurySwipes","SandAttack","LeechLife"},
{"Ninjask","61","90","Slash","AerialAce","SwordsDance","DoubleTeam"},
{"Shedinja","1","90","ShadowBall","XScissor","SwordsDance","Protect"},
{"Whismur","64","51","Pound","Uproar","Supersonic","Howl"},
{"Loudred","84","71","Stomp","Uproar","Supersonic","Screech"},
{"Exploud","104","91","HyperVoice","Crunch","IceBeam","FireBlast"},
{"Makuhita","72","60","ArmThrust","BulkUp","KnockOff","FakeOut"},
{"Hariyama","144","120","CloseCombat","BulkUp","KnockOff","FakeOut"},
{"Azurill","50","20","Bubble","Slam","Charm","TailWhip"},
{"Nosepass","30","45","RockThrow","ThunderWave","Block","Sandstorm"},
{"Skitty","50","45","Tackle","Sing","Attract","Assist"},
{"Delcatty","70","65","Sing","Attract","Assist","DoubleEdge"},
{"Sableye","50","75","ShadowBall","NightShade","ConfuseRay","Detect"},
{"Mawile","50","85","Bite","IronHead","SwordsDance","Crunch"},
{"Aron","50","70","Tackle","MetalClaw","Harden","Headbutt"},
{"Lairon","60","90","IronHead","RockSlide","Protect","TakeDown"},
{"Aggron","70","110","IronHead","RockSlide","Earthquake","DoubleEdge"},
{"Meditite","30","40","Confusion","Detect","HiddenPower","CalmMind"},
{"Medicham","60","60","Psychic","HighJumpKick","CalmMind","IcePunch"},
{"Electrike","40","45","ThunderShock","QuickAttack","Howl","Spark"},
{"Manectric","70","75","Thunderbolt","Bite","ThunderWave","Flamethrower"},
{"Plusle","60","50","Thunderbolt","QuickAttack","ThunderWave","HelpingHand"},
{"Minun","60","40","Thunderbolt","QuickAttack","ThunderWave","HelpingHand"},
{"Volbeat","65","73","SignalBeam","ConfuseRay","TailGlow","DoubleTeam"},
{"Illumise","65","47","SilverWind","Charm","Moonlight","SweetScent"},
{"Roselia","50","60","MagicalLeaf","StunSpore","LeechSeed","GigaDrain"},
{"Gulpin","70","43","Sludge","Yawn","Toxic","Amnesia"},
{"Swalot","100","73","SludgeBomb","Yawn","Toxic","Amnesia"},
{"Carvanha","45","90","Bite","Crunch","Screech","AquaJet"},
{"Sharpedo","70","120","Crunch","Surf","IceFang","Screech"},
{"Wailmer","130","70","WaterGun","Rollout","Rest","Splash"},
{"Wailord","170","90","Surf","IceBeam","Rest","BodySlam"},
{"Numel","60","60","Ember","Magnitude","Amnesia","TakeDown"},
{"Camerupt","70","100","Earthquake","Flamethrower","RockSlide","Amnesia"},
{"Torkoal","70","85","Flamethrower","Smokescreen","Curse","Protect"},
{"Spoink","60","25","Psybeam","ConfuseRay","TeeterDance","Psychic"},
{"Grumpig","80","45","Psychic","ConfuseRay","CalmMind","ShadowBall"},
{"Spinda","60","60","DizzyPunch","TeeterDance","FakeOut","Uproar"},
{"Trapinch","45","100","Bite","SandAttack","Dig","Crunch"},
{"Vibrava","50","70","DragonBreath","Sandstorm","Fly","Screech"},
{"Flygon","80","100","Earthquake","DragonClaw","Fly","FireBlast"},
{"Cacnea","50","85","NeedleArm","LeechSeed","Growth","PinMissile"},
{"Cacturne","70","115","NeedleArm","FaintAttack","Sandstorm","SuckerPunch"},
{"Swablu","45","40","Peck","Sing","Safeguard","MirrorMove"},
{"Altaria","75","70","DragonClaw","Fly","DragonDance","Flamethrower"},
{"Zangoose","73","115","Slash","SwordsDance","CloseCombat","QuickAttack"},
{"Seviper","73","100","PoisonFang","Crunch","Screech","Coil"},
{"Lunatone","70","55","Psychic","RockSlide","CalmMind","Hypnosis"},
{"Solrock","70","95","RockSlide","Psychic","SunnyDay","CalmMind"},
{"Barboach","50","48","WaterGun","MudShot","Amnesia","Spark"},
{"Whiscash","110","78","Surf","Earthquake","Amnesia","IceBeam"},
{"Corphish","43","80","Bubble","Crabhammer","SwordsDance","KnockOff"},
{"Crawdaunt","63","120","Crabhammer","Crunch","SwordsDance","KnockOff"},
{"Baltoy","40","40","Confusion","RapidSpin","LightScreen","Reflect"},
{"Claydol","60","70","Psychic","Earthquake","LightScreen","RapidSpin"},
{"Lileep","66","41","MegaDrain","ConfuseRay","Ingrain","AncientPower"},
{"Cradily","86","81","GigaDrain","AncientPower","ConfuseRay","Recover"},
{"Anorith","45","95","Scratch","RockSlide","FuryCutter","MetalClaw"},
{"Armaldo","75","125","XScissor","RockSlide","SwordsDance","Earthquake"},
{"Feebas","20","15","Splash","Tackle","Flail","Recover"},
{"Milotic","95","60","Surf","IceBeam","Recover","DragonBreath"},
{"Castform","70","70","WeatherBall","SunnyDay","RainDance","Hail"},
{"Kecleon","60","90","Slash","ShadowSneak","SuckerPunch","Feint"},
{"Shuppet","44","75","Astonish","NightShade","Curse","Screech"},
{"Banette","64","115","ShadowBall","SuckerPunch","WillOWisp","Curse"},
{"Duskull","20","40","Astonish","ConfuseRay","WillOWisp","NightShade"},
{"Dusclops","40","70","ShadowPunch","ConfuseRay","WillOWisp","Protect"},
{"Tropius","99","68","RazorLeaf","AirSlash","SunnyDay","Synthesis"},
{"Chimecho","65","50","Psychic","HealBell","Yawn","Recover"},
{"Absol","65","130","Slash","SwordsDance","Crunch","PsychoCut"},
{"Wynaut","95","23","Counter","MirrorCoat","Safeguard","DestinyBond"},
{"Snorunt","50","50","PowderSnow","Bite","DoubleTeam","IceShard"},
{"Glalie","80","80","IceBeam","Crunch","Hail","Protect"},
{"Spheal","70","40","WaterGun","PowderSnow","BodySlam","Rollout"},
{"Sealeo","90","60","IceBall","AuroraBeam","Rest","BodySlam"},
{"Walrein","110","80","Surf","IceBeam","BodySlam","Rest"},
{"Clamperl","35","64","WaterGun","Clamp","Protect","IceBeam"},
{"Huntail","55","104","Crunch","Waterfall","IceFang","Screech"},
{"Gorebyss","55","84","Surf","Psychic","Agility","IceBeam"},
{"Relicanth","100","90","Waterfall","RockSlide","Amnesia","Rest"},
{"Luvdisc","43","30","WaterGun","Attract","SweetKiss","AquaRing"},
{"Bagon","45","75","Bite","Ember","DragonBreath","Headbutt"},
{"Shelgon","65","95","DragonBreath","Protect","Headbutt","RockSlide"},
{"Salamence","95","135","DragonClaw","Fly","Flamethrower","Crunch"},
{"Beldum","40","55","TakeDown","TakeDown","TakeDown","TakeDown"},
{"Metang","60","75","MetalClaw","Psychic","Pursuit","Confusion"},
{"Metagross","80","135","MeteorMash","Psychic","Earthquake","Agility"},
{"Regirock","80","100","RockSlide","Curse","Superpower","Explosion"},
{"Regice","80","50","IceBeam","Amnesia","Thunderbolt","Rest"},
{"Registeel","80","75","IronHead","Curse","Amnesia","Toxic"},
{"Latias","80","80","Psychic","DragonClaw","CalmMind","Recover"},
{"Latios","80","90","Psychic","DragonClaw","CalmMind","Thunderbolt"},
{"Kyogre","100","100","Surf","IceBeam","Thunder","CalmMind"},
{"Groudon","100","150","Earthquake","FireBlast","SolarBeam","SwordsDance"},
{"Rayquaza","105","150","DragonClaw","Fly","ExtremeSpeed","Crunch"},
{"Jirachi","100","100","Psychic","IronHead","Wish","CalmMind"},
{"Deoxys","50","150","Psychic","PsychoBoost","Recover","ExtremeSpeed"},
{"Turtwig","55","68","RazorLeaf","Tackle","Withdraw","LeechSeed"},
{"Grotle","75","89","RazorLeaf","Bite","Curse","LeechSeed"},
{"Torterra","95","109","Earthquake","WoodHammer","Crunch","LeechSeed"},
{"Chimchar","44","58","Ember","Scratch","Taunt","MachPunch"},
{"Monferno","64","78","FlameWheel","MachPunch","Taunt","FurySwipes"},
{"Infernape","76","104","Flamethrower","CloseCombat","MachPunch","GrassKnot"},
{"Piplup","53","51","Bubble","Pound","Growl","Peck"},
{"Prinplup","64","66","BubbleBeam","MetalClaw","Peck","Growl"},
{"Empoleon","84","86","Surf","FlashCannon","IceBeam","DrillPeck"},
{"Starly","40","55","Tackle","QuickAttack","WingAttack","Growl"},
{"Staravia","55","75","WingAttack","QuickAttack","DoubleTeam","Endeavor"},
{"Staraptor","85","120","BraveBird","CloseCombat","QuickAttack","Uturn"},
{"Bidoof","59","45","Tackle","DefenseCurl","Rollout","Headbutt"},
{"Bibarel","79","85","Waterfall","HyperFang","SuperFang","Curse"},
{"Kricketot","37","25","Growl","Bide","BugBite","StruggleBug"},
{"Kricketune","77","85","XScissor","Slash","Sing","FuryCutter"},
{"Shinx","45","65","Tackle","Spark","Leer","Bite"},
{"Luxio","60","85","Spark","Bite","Roar","Swagger"},
{"Luxray","80","120","Thunderbolt","Crunch","IceFang","Superpower"},
{"Budew","40","30","Absorb","Growth","WaterSport","StunSpore"},
{"Roserade","60","70","EnergyBall","SludgeBomb","ToxicSpikes","ShadowBall"},
{"Cranidos","67","125","Headbutt","AncientPower","Leer","TakeDown"},
{"Rampardos","97","165","HeadSmash","Earthquake","ZenHeadbutt","Crunch"},
{"Shieldon","30","42","Tackle","IronDefense","Taunt","MetalSound"},
{"Bastiodon","60","52","IronHead","StoneEdge","MetalSound","Protect"},
{"Burmy","40","29","Protect","Tackle","BugBite","HiddenPower"},
{"Wormadam","60","59","BugBuzz","Protect","QuiverDance","Psychic"},
{"Mothim","70","94","BugBuzz","AirSlash","QuiverDance","ShadowBall"},
{"Combee","30","30","Gust","SweetScent","BugBite","StruggleBug"},
{"Vespiquen","70","80","AttackOrder","DefendOrder","HealOrder","AirSlash"},
{"Pachirisu","60","45","Spark","QuickAttack","Charm","SuperFang"},
{"Buizel","55","65","WaterGun","QuickAttack","Pursuit","AquaJet"},
{"Floatzel","85","105","Waterfall","IceFang","Crunch","AquaJet"},
{"Cherubi","45","35","Absorb","Growth","SunnyDay","LeechSeed"},
{"Cherrim","70","60","SolarBeam","SunnyDay","Growth","WeatherBall"},
{"Shellos","76","48","MudSlap","WaterPulse","Recover","AncientPower"},
{"Gastrodon","111","83","Surf","EarthPower","Recover","IceBeam"},
{"Ambipom","75","100","DoubleHit","FakeOut","Uturn","LowKick"},
{"Drifloon","90","50","Astonish","Gust","Minimize","Stockpile"},
{"Drifblim","150","80","ShadowBall","Fly","Stockpile","Explosion"},
{"Buneary","55","66","QuickAttack","JumpKick","Charm","Agility"},
{"Lopunny","65","76","Return","JumpKick","Charm","Agility"},
{"Mismagius","60","60","ShadowBall","PowerGem","NastyPlot","Psychic"},
{"Honchkrow","100","125","BraveBird","NightSlash","Superpower","Roost"},
{"Glameow","49","55","Scratch","Bite","FakeOut","FurySwipes"},
{"Purugly","71","82","Slash","BodySlam","FakeOut","PlayRough"},
{"Chingling","45","30","Wrap","Confusion","Yawn","Astonish"},
{"Stunky","63","63","PoisonGas","Bite","FurySwipes","Smokescreen"},
{"Skuntank","103","93","PoisonJab","Crunch","Flamethrower","Toxic"},
{"Bronzor","57","24","Confusion","IronDefense","Hypnosis","Extrasensory"},
{"Bronzong","67","89","GyroBall","Psychic","Hypnosis","Earthquake"},
{"Bonsly","50","80","RockThrow","FakeTears","Copycat","LowKick"},
{"MimeJr","20","25","Confusion","Copycat","Barrier","Encore"},
{"Happiny","100","5","Pound","Charm","Copycat","Refresh"},
{"Chatot","76","65","Chatter","WingAttack","HyperVoice","Uturn"},
{"Spiritomb","50","92","ShadowBall","DarkPulse","WillOWisp","SuckerPunch"},
{"Gible","58","70","DragonBreath","SandAttack","TakeDown","Slash"},
{"Gabite","68","90","DragonClaw","Slash","Sandstorm","Dig"},
{"Garchomp","108","130","Earthquake","DragonClaw","StoneEdge","SwordsDance"},
{"Munchlax","135","85","BodySlam","Rest","SleepTalk","Crunch"},
{"Riolu","40","70","QuickAttack","ForcePalm","Counter","Endure"},
{"Lucario","70","110","AuraSphere","CloseCombat","ExtremeSpeed","FlashCannon"},
{"Hippopotas","68","72","SandAttack","Bite","Yawn","Dig"},
{"Hippowdon","108","112","Earthquake","Crunch","SlackOff","StoneEdge"},
{"Skorupi","40","50","PoisonSting","KnockOff","PinMissile","Bite"},
{"Drapion","70","90","CrossPoison","Crunch","Earthquake","SwordsDance"},
{"Croagunk","48","61","PoisonSting","LowKick","MudSlap","FakeOut"},
{"Toxicroak","83","106","PoisonJab","DrainPunch","SuckerPunch","SwordsDance"},
{"Carnivine","74","100","VineWhip","Bite","Growth","Crunch"},
{"Finneon","49","49","WaterGun","Attract","Gust","RainDance"},
{"Lumineon","69","69","Surf","IceBeam","RainDance","Uturn"},
{"Mantyke","45","20","Bubble","Supersonic","ConfuseRay","SignalBeam"},
{"Snover","60","62","PowderSnow","RazorLeaf","IcyWind","Mist"},
{"Abomasnow","90","92","Blizzard","WoodHammer","IceShard","Earthquake"},
{"Weavile","70","120","IcePunch","NightSlash","SwordsDance","IceShard"},
{"Magnezone","70","70","Thunderbolt","FlashCannon","VoltSwitch","TriAttack"},
{"Lickilicky","110","85","BodySlam","PowerWhip","Earthquake","Wish"},
{"Rhyperior","115","140","Earthquake","StoneEdge","Megahorn","HammerArm"},
{"Tangrowth","100","100","PowerWhip","SleepPowder","KnockOff","GigaDrain"},
{"Electivire","75","123","ThunderPunch","WildCharge","IcePunch","Earthquake"},
{"Magmortar","75","95","Flamethrower","FireBlast","Thunderbolt","Psychic"},
{"Togekiss","85","50","AirSlash","AuraSphere","ThunderWave","Roost"},
{"Yanmega","86","76","BugBuzz","AirSlash","AncientPower","Detect"},
{"Leafeon","65","110","LeafBlade","SwordsDance","QuickAttack","XScissor"},
{"Glaceon","65","60","IceBeam","ShadowBall","Hail","SignalBeam"},
{"Gliscor","75","95","Earthquake","AerialAce","SwordsDance","Roost"},
{"Mamoswine","110","130","Earthquake","IceShard","IcicleCrash","StoneEdge"},
{"PorygonZ","85","80","TriAttack","NastyPlot","DarkPulse","IceBeam"},
{"Gallade","68","125","CloseCombat","PsychoCut","SwordsDance","LeafBlade"},
{"Probopass","60","55","PowerGem","FlashCannon","ThunderWave","EarthPower"},
{"Dusknoir","45","100","ShadowPunch","Earthquake","WillOWisp","PainSplit"},
{"Froslass","70","80","IceBeam","ShadowBall","DestinyBond","Spikes"},
{"Rotom","50","50","Thunderbolt","ShadowBall","WillOWisp","VoltSwitch"},
{"Uxie","75","75","Psychic","CalmMind","Yawn","Uturn"},
{"Mesprit","80","105","Psychic","Thunderbolt","IceBeam","Uturn"},
{"Azelf","75","125","Psychic","Flamethrower","NastyPlot","Explosion"},
{"Dialga","100","120","RoarOfTime","FlashCannon","Thunderbolt","AuraSphere"},
{"Palkia","90","120","SpacialRend","Surf","Thunderbolt","FireBlast"},
{"Heatran","91","90","Flamethrower","FlashCannon","EarthPower","LavaPlume"},
{"Regigigas","110","160","GigaImpact","Earthquake","ZenHeadbutt","FirePunch"},
{"Giratina","150","100","ShadowForce","DragonClaw","AuraSphere","WillOWisp"},
{"Cresselia","120","70","Psychic","Moonlight","CalmMind","IceBeam"},
{"Phione","80","80","Surf","IceBeam","RainDance","Uturn"},
{"Manaphy","100","100","Surf","TailGlow","IceBeam","Psychic"},
{"Darkrai","70","90","DarkPulse","Hypnosis","DreamEater","NastyPlot"},
{"Shaymin","100","100","SeedFlare","EarthPower","LeechSeed","Synthesis"},
{"Arceus","120","120","Judgment","Recover","ExtremeSpeed","CalmMind"},
{"Victini","100","100","VCreate","Psychic","FlameCharge","QuickAttack"},
{"Snivy","45","45","VineWhip","Tackle","Leer","Wrap"},
{"Servine","60","60","LeafTornado","Wrap","Growth","LeechSeed"},
{"Serperior","75","75","LeafStorm","Coil","GigaDrain","Glare"},
{"Tepig","65","63","Ember","Tackle","TailWhip","DefenseCurl"},
{"Pignite","90","93","FlameCharge","ArmThrust","Rollout","TakeDown"},
{"Emboar","110","123","FlareBlitz","HammerArm","WildCharge","HeadSmash"},
{"Oshawott","55","55","WaterGun","Tackle","TailWhip","FocusEnergy"},
{"Dewott","75","75","RazorShell","FuryCutter","WaterPulse","FocusEnergy"},
{"Samurott","95","100","Surf","Megahorn","IceBeam","SwordsDance"},
{"Patrat","45","55","Tackle","Bite","Detect","SandAttack"},
{"Watchog","60","85","Crunch","Hypnosis","ConfuseRay","SuperFang"},
{"Lillipup","45","60","Tackle","Bite","OdorSleuth","TakeDown"},
{"Herdier","65","80","TakeDown","Crunch","Roar","WorkUp"},
{"Stoutland","85","110","Return","Crunch","IceFang","WorkUp"},
{"Purrloin","41","50","Scratch","Assist","SandAttack","FurySwipes"},
{"Liepard","64","88","NightSlash","PlayRough","SuckerPunch","NastyPlot"},
{"Pansage","50","53","VineWhip","Lick","LeechSeed","Bite"},
{"Simisage","75","98","SeedBomb","Crunch","RockSlide","Acrobatics"},
{"Pansear","50","53","Ember","Lick","Yawn","Bite"},
{"Simisear","75","98","Flamethrower","Crunch","RockSlide","Acrobatics"},
{"Panpour","50","53","WaterGun","Lick","WaterSport","Bite"},
{"Simipour","75","98","Surf","Crunch","IceBeam","Acrobatics"},
{"Munna","76","25","Psybeam","Hypnosis","Moonlight","Yawn"},
{"Musharna","116","55","Psychic","Moonlight","CalmMind","DreamEater"},
{"Pidove","50","55","Gust","QuickAttack","Leer","AirCutter"},
{"Tranquill","62","77","AirCutter","QuickAttack","Roost","Detect"},
{"Unfezant","80","115","Fly","Return","QuickAttack","Uturn"},
{"Blitzle","45","60","QuickAttack","Spark","TailWhip","Charge"},
{"Zebstrika","75","100","Thunderbolt","WildCharge","FlameCharge","VoltSwitch"},
{"Roggenrola","55","75","RockBlast","Harden","SandAttack","Headbutt"},
{"Boldore","70","105","RockSlide","PowerGem","IronDefense","Sandstorm"},
{"Gigalith","85","135","StoneEdge","Earthquake","Explosion","Sandstorm"},
{"Woobat","55","45","Confusion","AirCutter","Attract","Endeavor"},
{"Swoobat","67","57","Psychic","AirSlash","CalmMind","Roost"},
{"Drilbur","60","85","Scratch","MudSlap","RapidSpin","Dig"},
{"Excadrill","110","135","Earthquake","IronHead","RockSlide","SwordsDance"},
{"Audino","103","60","Pound","HelpingHand","HealPulse","DoubleEdge"},
{"Timburr","75","80","LowKick","RockThrow","BulkUp","WakeUpSlap"},
{"Gurdurr","85","105","DrainPunch","RockSlide","BulkUp","Payback"},
{"Conkeldurr","105","140","DrainPunch","MachPunch","StoneEdge","BulkUp"},
{"Tympole","50","50","Bubble","Supersonic","MudShot","Round"},
{"Palpitoad","75","65","MudShot","BubbleBeam","Supersonic","RainDance"},
{"Seismitoad","105","95","Surf","Earthquake","SludgeWave","RainDance"},
{"Throh","120","100","StormThrow","CircleThrow","BulkUp","Payback"},
{"Sawk","75","125","CloseCombat","KarateChop","BulkUp","RockSlide"},
{"Sewaddle","45","53","BugBite","RazorLeaf","StringShot","Protect"},
{"Swadloon","55","63","BugBite","RazorLeaf","Protect","Growth"},
{"Leavanny","75","103","XScissor","LeafBlade","SwordsDance","AerialAce"},
{"Venipede","30","45","PoisonSting","Rollout","DefenseCurl","Screech"},
{"Whirlipede","40","55","PoisonTail","IronDefense","Rollout","Screech"},
{"Scolipede","60","100","Megahorn","PoisonJab","Earthquake","SwordsDance"},
{"Cottonee","40","27","Absorb","Growth","LeechSeed","StunSpore"},
{"Whimsicott","60","67","GigaDrain","Hurricane","LeechSeed","Tailwind"},
{"Petilil","45","35","Absorb","Growth","LeechSeed","SleepPowder"},
{"Lilligant","70","60","PetalDance","QuiverDance","SleepPowder","GigaDrain"},
{"Basculin","70","92","Waterfall","Crunch","AquaJet","Headbutt"},
{"Sandile","50","72","Bite","SandAttack","Torment","Crunch"},
{"Krokorok","60","82","Crunch","Dig","Swagger","Sandstorm"},
{"Krookodile","95","117","Earthquake","Crunch","StoneEdge","DragonClaw"},
{"Darumaka","70","90","FirePunch","Headbutt","Facade","Uproar"},
{"Darmanitan","105","140","FlareBlitz","Superpower","RockSlide","Uturn"},
{"Maractus","75","86","GigaDrain","PinMissile","Acupressure","SuckerPunch"},
{"Dwebble","50","65","SmackDown","BugBite","ShellSmash","RockPolish"},
{"Crustle","70","105","StoneEdge","XScissor","ShellSmash","Earthquake"},
{"Scraggy","50","75","LowKick","Headbutt","Payback","Swagger"},
{"Scrafty","65","90","HighJumpKick","Crunch","DragonDance","IcePunch"},
{"Sigilyph","72","58","AirSlash","Psychic","CosmicPower","Roost"},
{"Yamask","38","30","Astonish","WillOWisp","Hex","Protect"},
{"Cofagrigus","58","50","ShadowBall","WillOWisp","Hex","NastyPlot"},
{"Tirtouga","54","78","WaterGun","Bite","AncientPower","AquaJet"},
{"Carracosta","74","108","Waterfall","StoneEdge","AquaJet","ShellSmash"},
{"Archen","55","112","WingAttack","AncientPower","QuickAttack","DragonClaw"},
{"Archeops","75","140","Acrobatics","StoneEdge","Uturn","DragonClaw"},
{"Trubbish","50","50","Pound","PoisonGas","Recycle","ToxicSpikes"},
{"Garbodor","80","95","GunkShot","ToxicSpikes","Explosion","SeedBomb"},
{"Zorua","40","65","Scratch","FurySwipes","FaintAttack","Torment"},
{"Zoroark","60","105","NightDaze","Flamethrower","NastyPlot","Uturn"},
{"Minccino","55","50","Tackle","TailSlap","Charm","Swift"},
{"Cinccino","75","95","TailSlap","BulletSeed","RockBlast","Uturn"},
{"Gothita","45","30","Confusion","Tickle","FakeTears","Psybeam"},
{"Gothorita","60","45","Psybeam","FakeTears","FutureSight","Psychic"},
{"Gothitelle","70","55","Psychic","ShadowBall","CalmMind","Thunderbolt"},
{"Solosis","45","30","Confusion","Recover","LightScreen","Reflect"},
{"Duosion","65","40","Psychic","Recover","CalmMind","ShadowBall"},
{"Reuniclus","110","65","Psychic","CalmMind","Recover","FocusBlast"},
{"Ducklett","62","44","WaterGun","WingAttack","BubbleBeam","Roost"},
{"Swanna","75","87","Surf","Fly","IceBeam","Roost"},
{"Vanillite","36","50","IceShard","IcyWind","Astonish","Hail"},
{"Vanillish","51","65","IceBeam","MirrorShot","AcidArmor","Hail"},
{"Vanilluxe","71","95","Blizzard","IceBeam","FlashCannon","Hail"},
{"Deerling","60","60","Tackle","LeechSeed","TakeDown","JumpKick"},
{"Sawsbuck","80","100","HornLeech","JumpKick","DoubleEdge","Megahorn"},
{"Emolga","55","75","ThunderShock","QuickAttack","Acrobatics","VoltSwitch"},
{"Karrablast","50","75","Peck","FuryAttack","BugBite","Headbutt"},
{"Escavalier","70","135","IronHead","Megahorn","SwordsDance","KnockOff"},
{"Foongus","69","55","Absorb","StunSpore","MegaDrain","Toxic"},
{"Amoonguss","114","85","GigaDrain","Spore","SludgeBomb","ClearSmog"},
{"Frillish","55","40","BubbleBeam","NightShade","Recover","WillOWisp"},
{"Jellicent","100","60","Surf","ShadowBall","Recover","IceBeam"},
{"Alomomola","165","75","Waterfall","Wish","Protect","Toxic"},
{"Joltik","50","47","ThunderShock","LeechLife","SpiderWeb","BugBite"},
{"Galvantula","70","77","Thunder","BugBuzz","VoltSwitch","EnergyBall"},
{"Ferroseed","44","50","Tackle","IronDefense","LeechSeed","MetalClaw"},
{"Ferrothorn","74","94","PowerWhip","GyroBall","LeechSeed","StealthRock"},
{"Klink","40","55","ViceGrip","ChargeBeam","Bind","GearGrind"},
{"Klang","60","80","GearGrind","ChargeBeam","Autotomize","ShiftGear"},
{"Klinklang","60","100","GearGrind","ShiftGear","WildCharge","FlashCannon"},
{"Tynamo","35","55","Tackle","ThunderWave","Spark","ChargeBeam"},
{"Eelektrik","65","85","Spark","Acid","Crunch","Thunderbolt"},
{"Eelektross","85","115","Thunderbolt","Crunch","DrainPunch","Flamethrower"},
{"Elgyem","55","55","Confusion","Headbutt","Recover","Psychic"},
{"Beheeyem","75","75","Psychic","CalmMind","Recover","ShadowBall"},
{"Litwick","50","30","Ember","Astonish","Smog","FireSpin"},
{"Lampent","60","40","FlameBurst","ShadowBall","WillOWisp","FireSpin"},
{"Chandelure","60","55","Flamethrower","ShadowBall","EnergyBall","CalmMind"},
{"Axew","46","87","Scratch","DragonClaw","Slash","DragonDance"},
{"Fraxure","66","117","DragonClaw","Slash","DragonDance","XScissor"},
{"Haxorus","76","147","DragonClaw","Earthquake","SwordsDance","PoisonJab"},
{"Cubchoo","55","70","PowderSnow","FurySwipes","Brine","IcyWind"},
{"Beartic","95","110","IcicleCrash","Superpower","AquaJet","SwordsDance"},
{"Cryogonal","70","50","IceBeam","Recover","Reflect","RapidSpin"},
{"Shelmet","50","40","Acid","BugBite","Protect","Recover"},
{"Accelgor","80","70","BugBuzz","EnergyBall","Recover","Uturn"},
{"Stunfisk","109","66","MudShot","Thunderbolt","Discharge","EarthPower"},
{"Mienfoo","45","85","DrainPunch","FakeOut","Detect","Uturn"},
{"Mienshao","65","125","HighJumpKick","Uturn","StoneEdge","KnockOff"},
{"Druddigon","77","120","DragonClaw","Crunch","RockSlide","Glare"},
{"Golett","59","74","ShadowPunch","MudSlap","Rollout","IronDefense"},
{"Golurk","89","124","ShadowPunch","Earthquake","DynamicPunch","StoneEdge"},
{"Pawniard","45","85","Scratch","MetalClaw","FaintAttack","SwordsDance"},
{"Bisharp","65","125","IronHead","NightSlash","SwordsDance","SuckerPunch"},
{"Bouffalant","95","110","HeadCharge","Earthquake","Megahorn","StoneEdge"},
{"Rufflet","70","83","Peck","WingAttack","HoneClaws","Slash"},
{"Braviary","100","123","BraveBird","Superpower","Uturn","BulkUp"},
{"Vullaby","70","55","Gust","FoulPlay","Protect","Roost"},
{"Mandibuzz","110","65","FoulPlay","Roost","Defog","Toxic"},
{"Heatmor","85","97","Flamethrower","BugBite","Slash","Amnesia"},
{"Durant","58","109","IronHead","XScissor","HoneClaws","RockSlide"},
{"Deino","52","65","Bite","DragonRage","Headbutt","FocusEnergy"},
{"Zweilous","72","85","Crunch","DragonBreath","Headbutt","WorkUp"},
{"Hydreigon","92","105","DragonPulse","DarkPulse","Flamethrower","Surf"},
{"Larvesta","55","85","Ember","BugBite","FlameCharge","StringShot"},
{"Volcarona","85","60","FieryDance","BugBuzz","QuiverDance","GigaDrain"},
{"Cobalion","91","90","IronHead","CloseCombat","SwordsDance","StoneEdge"},
{"Terrakion","91","129","CloseCombat","StoneEdge","SwordsDance","Earthquake"},
{"Virizion","91","90","LeafBlade","CloseCombat","SwordsDance","StoneEdge"},
{"Tornadus","79","115","Hurricane","AirSlash","Uturn","KnockOff"},
{"Thundurus","79","115","Thunderbolt","Thunder","NastyPlot","VoltSwitch"},
{"Reshiram","100","120","BlueFlare","DragonPulse","EarthPower","Flamethrower"},
{"Zekrom","100","150","BoltStrike","DragonClaw","Crunch","ZenHeadbutt"},
{"Landorus","89","125","Earthquake","StoneEdge","Uturn","RockSlide"},
{"Kyurem","125","130","IceBeam","DragonClaw","EarthPower","Roost"},
{"Keldeo","91","72","SecretSword","Surf","CalmMind","HydroPump"},
{"Meloetta","100","77","Psychic","RelicSong","CloseCombat","ShadowBall"},
{"Genesect","71","120","TechnoBlast","XScissor","Flamethrower","Thunderbolt"},
{"Chespin","56","61","VineWhip","Tackle","Growl","Rollout"},
{"Quilladin","61","78","VineWhip","Rollout","Bite","LeechSeed"},
{"Chesnaught","88","107","HammerArm","WoodHammer","Earthquake","LeechSeed"},
{"Fennekin","40","45","Ember","Scratch","TailWhip","Psybeam"},
{"Braixen","59","59","FlameCharge","Psybeam","FireSpin","LightScreen"},
{"Delphox","75","69","Flamethrower","Psychic","ShadowBall","CalmMind"},
{"Froakie","41","56","Bubble","QuickAttack","Lick","WaterPulse"},
{"Frogadier","54","63","WaterPulse","QuickAttack","Smokescreen","DoubleTeam"},
{"Greninja","72","95","WaterShuriken","NightSlash","HydroPump","IceBeam"},
{"Bunnelby","38","36","Tackle","MudSlap","QuickAttack","DoubleKick"},
{"Diggersby","85","56","Earthquake","Return","QuickAttack","SwordsDance"},
{"Fletchling","45","50","Peck","QuickAttack","Ember","Agility"},
{"Fletchinder","62","73","FlameCharge","AerialAce","Roost","SwordsDance"},
{"Talonflame","78","81","BraveBird","FlareBlitz","Roost","SwordsDance"},
{"Scatterbug","38","35","Tackle","StringShot","BugBite","Snore"},
{"Spewpa","45","22","Harden","Protect","BugBite","Tackle"},
{"Vivillon","80","52","BugBuzz","Hurricane","QuiverDance","SleepPowder"},
{"Litleo","62","50","Ember","Headbutt","WorkUp","NobleRoar"},
{"Pyroar","86","68","Flamethrower","HyperVoice","DarkPulse","WorkUp"},
{"Flabebe","44","38","FairyWind","VineWhip","Wish","MagicalLeaf"},
{"Floette","54","45","MagicalLeaf","Wish","PetalDance","Aromatherapy"},
{"Florges","78","65","Moonblast","PetalDance","Wish","Aromatherapy"},
{"Skiddo","66","65","VineWhip","Tackle","Growth","LeechSeed"},
{"Gogoat","123","100","HornLeech","Earthquake","BulkUp","MilkDrink"},
{"Pancham","67","82","KarateChop","Bite","WorkUp","ArmThrust"},
{"Pangoro","95","124","HammerArm","Crunch","BulkUp","PartingShot"},
{"Furfrou","75","80","Headbutt","Bite","CottonGuard","TakeDown"},
{"Espurr","62","48","Confusion","FakeOut","LightScreen","Reflect"},
{"Meowstic","74","48","Psychic","ShadowBall","LightScreen","Reflect"},
{"Honedge","45","80","ShadowSneak","AerialAce","SwordsDance","IronDefense"},
{"Doublade","59","110","ShadowSneak","IronHead","SwordsDance","SacredSword"},
{"Aegislash","60","50","ShadowBall","IronHead","KingsShield","SacredSword"},
{"Spritzee","78","52","FairyWind","SweetKiss","CalmMind","Aromatherapy"},
{"Aromatisse","101","72","Moonblast","CalmMind","Psychic","Aromatherapy"},
{"Swirlix","62","48","FairyWind","PlayRough","SweetKiss","CottonSpore"},
{"Slurpuff","82","80","PlayRough","BellyDrum","DrainPunch","Return"},
{"Inkay","53","54","Tackle","Peck","FoulPlay","Psybeam"},
{"Malamar","86","92","NightSlash","PsychoCut","Superpower","TopsyTurvy"},
{"Binacle","42","52","FuryCutter","SmackDown","MudSlap","Slash"},
{"Barbaracle","72","105","StoneEdge","RazorShell","ShellSmash","CrossChop"},
{"Skrelp","50","60","Acid","WaterGun","Twister","PoisonTail"},
{"Dragalge","65","75","DragonPulse","SludgeBomb","Surf","ToxicSpikes"},
{"Clauncher","50","53","WaterGun","BubbleBeam","ViceGrip","SmackDown"},
{"Clawitzer","71","73","WaterPulse","DarkPulse","IceBeam","AuraSphere"},
{"Helioptile","44","38","QuickAttack","ThunderShock","Charge","MudSlap"},
{"Heliolisk","62","55","Thunderbolt","HyperVoice","Surf","VoltSwitch"},
{"Tyrunt","58","89","Bite","RockThrow","DragonTail","Stomp"},
{"Tyrantrum","82","121","HeadSmash","DragonClaw","Earthquake","Crunch"},
{"Amaura","77","59","PowderSnow","AncientPower","AuroraBeam","LightScreen"},
{"Aurorus","123","77","Blizzard","FreezeDry","Thunderbolt","LightScreen"},
{"Sylveon","95","65","Moonblast","HyperVoice","CalmMind","Wish"},
{"Hawlucha","78","92","FlyingPress","HighJumpKick","SwordsDance","Acrobatics"},
{"Dedenne","67","58","Thunderbolt","PlayRough","Nuzzle","VoltSwitch"},
{"Carbink","50","50","PowerGem","Moonblast","Reflect","LightScreen"},
{"Goomy","45","50","Tackle","Bubble","DragonBreath","Protect"},
{"Sliggoo","68","75","DragonPulse","WaterPulse","Protect","RainDance"},
{"Goodra","90","100","DragonPulse","Surf","Thunderbolt","FireBlast"},
{"Klefki","57","80","PlayRough","FlashCannon","ThunderWave","Spikes"},
{"Phantump","43","70","Astonish","LeechSeed","WillOWisp","Hex"},
{"Trevenant","85","110","HornLeech","ShadowClaw","WillOWisp","LeechSeed"},
{"Pumpkaboo","49","66","ShadowSneak","RazorLeaf","LeechSeed","TrickOrTreat"},
{"Gourgeist","65","90","ShadowBall","SeedBomb","WillOWisp","LeechSeed"},
{"Bergmite","55","69","IceShard","IcyWind","Protect","Recover"},
{"Avalugg","95","117","Avalanche","Earthquake","RapidSpin","Recover"},
{"Noibat","40","30","Gust","Supersonic","Bite","WingAttack"},
{"Noivern","85","70","Hurricane","DragonPulse","Flamethrower","Roost"},
{"Xerneas","126","131","Moonblast","Geomancy","Thunderbolt","FocusBlast"},
{"Yveltal","126","131","DarkPulse","Hurricane","OblivionWing","Roost"},
{"Zygarde","108","100","ThousandArrows","DragonClaw","Earthquake","Coil"},
{"Diancie","50","100","DiamondStorm","Moonblast","EarthPower","Reflect"},
{"Hoopa","80","110","Psychic","ShadowBall","HyperspaceHole","NastyPlot"},
{"Volcanion","80","110","SteamEruption","Flamethrower","SludgeBomb","EarthPower"},
{"Rowlet","68","55","Leafage","Tackle","Growl","Peck"},
{"Dartrix","78","75","RazorLeaf","Pluck","Synthesis","FuryAttack"},
{"Decidueye","78","107","SpiritShackle","LeafBlade","BraveBird","SwordsDance"},
{"Litten","45","65","Ember","Scratch","Growl","Lick"},
{"Torracat","65","85","FlameCharge","Bite","Roar","Swagger"},
{"Incineroar","95","115","FlareBlitz","DarkestLariat","BulkUp","Earthquake"},
{"Popplio","50","54","WaterGun","Pound","Growl","DisarmingVoice"},
{"Brionne","60","69","BubbleBeam","DisarmingVoice","AquaJet","Sing"},
{"Primarina","80","74","SparklingAria","Moonblast","IceBeam","CalmMind"},
{"Pikipek","35","75","Peck","Growl","EchoedVoice","RockSmash"},
{"Trumbeak","55","85","Pluck","RockBlast","EchoedVoice","Roost"},
{"Toucannon","80","120","BeakBlast","DrillPeck","RockBlast","BulletSeed"},
{"Yungoos","48","70","Tackle","Leer","Bite","SandAttack"},
{"Gumshoos","88","110","Crunch","HyperFang","SuperFang","TakeDown"},
{"Grubbin","47","62","ViceGrip","StringShot","BugBite","Spark"},
{"Charjabug","57","82","BugBite","Spark","Charge","Crunch"},
{"Vikavolt","77","70","Thunderbolt","BugBuzz","EnergyBall","VoltSwitch"},
{"Crabrawler","47","82","Bubble","RockSmash","Leer","PowerUpPunch"},
{"Crabominable","97","132","IceHammer","CloseCombat","Earthquake","Avalanche"},
{"Oricorio","75","70","AirSlash","RevelationDance","Roost","TeeterDance"},
{"Cutiefly","40","45","FairyWind","BugBite","StunSpore","SweetScent"},
{"Ribombee","60","55","PollenPuff","Moonblast","QuiverDance","StunSpore"},
{"Rockruff","45","65","Tackle","Bite","RockThrow","Howl"},
{"Lycanroc","75","115","StoneEdge","Crunch","Accelerock","SwordsDance"},
{"Wishiwashi","45","20","WaterGun","Growl","Brine","TakeDown"},
{"Mareanie","50","53","PoisonSting","WaterGun","Recover","Venoshock"},
{"Toxapex","50","63","BanefulBunker","Recover","Scald","Toxic"},
{"Mudbray","70","100","MudSlap","DoubleKick","Bulldoze","Stomp"},
{"Mudsdale","100","125","Earthquake","HeavySlam","RockSlide","Superpower"},
{"Dewpider","38","40","Bubble","BugBite","Bite","Infestation"},
{"Araquanid","68","70","Liquidation","LeechLife","Crunch","MirrorCoat"},
{"Fomantis","40","55","RazorLeaf","Growth","FuryCutter","Synthesis"},
{"Lurantis","70","105","LeafBlade","XScissor","Synthesis","Superpower"},
{"Morelull","40","35","Absorb","StunSpore","SleepPowder","MegaDrain"},
{"Shiinotic","60","45","Moonblast","GigaDrain","Spore","DreamEater"},
{"Salandit","48","44","Ember","PoisonGas","DragonRage","Smokescreen"},
{"Salazzle","68","64","Flamethrower","SludgeBomb","NastyPlot","DragonPulse"},
{"Stufful","70","75","Tackle","BabyDollEyes","BrutalSwing","Payback"},
{"Bewear","120","125","HammerArm","DoubleEdge","Superpower","Payback"},
{"Bounsweet","42","30","Splash","PlayNice","RazorLeaf","RapidSpin"},
{"Steenee","52","40","RazorLeaf","RapidSpin","TeeterDance","MagicalLeaf"},
{"Tsareena","72","120","TropKick","HighJumpKick","RapidSpin","Uturn"},
{"Comfey","51","52","DrainingKiss","MagicalLeaf","LeechSeed","Aromatherapy"},
{"Oranguru","90","60","Psychic","Instruct","CalmMind","FoulPlay"},
{"Passimian","100","120","CloseCombat","Uturn","RockSlide","BulkUp"},
{"Wimpod","25","35","StruggleBug","SandAttack","DefenseCurl","WideGuard"},
{"Golisopod","75","125","FirstImpression","Liquidation","LeechLife","SuckerPunch"},
{"Sandygast","55","55","SandAttack","Astonish","Absorb","MegaDrain"},
{"Palossand","85","75","ShadowBall","EarthPower","GigaDrain","ShoreUp"},
{"Pyukumuku","55","60","Counter","MirrorCoat","Recover","Toxic"},
{"TypeNull","95","95","Tackle","Pursuit","IronHead","DoubleEdge"},
{"Silvally","95","95","MultiAttack","Crunch","Flamethrower","SwordsDance"},
{"Minior","60","60","RockThrow","Swift","SelfDestruct","CosmicPower"},
{"Komala","65","115","Yawn","Slam","WoodHammer","PlayRough"},
{"Turtonator","60","78","Flamethrower","DragonPulse","ShellTrap","FlashCannon"},
{"Togedemaru","65","98","ZingZap","IronHead","SpikyShield","Nuzzle"},
{"Mimikyu","55","90","PlayRough","ShadowClaw","SwordsDance","ShadowSneak"},
{"Bruxish","68","105","PsychicFangs","Crunch","AquaJet","IceFang"},
{"Drampa","78","60","DragonPulse","HyperVoice","Flamethrower","Roost"},
{"Dhelmise","70","131","AnchorShot","PowerWhip","ShadowClaw","SwordsDance"},
{"Jangmo-o","45","55","Tackle","DragonBreath","Protect","ScaryFace"},
{"Hakamo-o","55","75","DragonClaw","BrickBreak","Protect","DragonDance"},
{"Kommo-o","75","110","ClangingScales","CloseCombat","DragonDance","Flamethrower"},
{"TapuKoko","70","115","Thunderbolt","DazzlingGleam","VoltSwitch","BraveBird"},
{"TapuLele","70","85","Psychic","Moonblast","FocusBlast","ShadowBall"},
{"TapuBulu","70","130","HornLeech","WoodHammer","Superpower","StoneEdge"},
{"TapuFini","70","75","Surf","Moonblast","CalmMind","IceBeam"},
{"Cosmog","43","29","Splash","Teleport","Splash","Teleport"},
{"Cosmoem","43","29","Splash","Teleport","Splash","Teleport"},
{"Solgaleo","137","137","SunsteelStrike","PsychicFangs","FlareBlitz","Earthquake"},
{"Lunala","137","113","MoongeistBeam","Psychic","ShadowBall","CalmMind"},
{"Nihilego","109","53","PowerGem","SludgeWave","Thunderbolt","GrassKnot"},
{"Buzzwole","107","139","LeechLife","Superpower","IcePunch","BulkUp"},
{"Pheromosa","71","137","HighJumpKick","BugBuzz","IceBeam","Uturn"},
{"Xurkitree","83","89","Thunderbolt","EnergyBall","TailGlow","VoltSwitch"},
{"Celesteela","97","101","HeavySlam","AirSlash","LeechSeed","Flamethrower"},
{"Kartana","59","181","LeafBlade","SmartStrike","SacredSword","SwordsDance"},
{"Guzzlord","223","101","Crunch","DragonClaw","Earthquake","HeavySlam"},
{"Necrozma","97","107","PrismLaser","Psychic","PhotonGeyser","Moonlight"},
{"Magearna","80","95","FlashCannon","AuraSphere","CalmMind","FleurCannon"},
{"Marshadow","90","125","SpectralThief","CloseCombat","ShadowSneak","BulkUp"},
{"Grookey","50","65","Scratch","BranchPoke","Growl","KnockOff"},
{"Thwackey","70","85","RazorLeaf","KnockOff","Screech","Uturn"},
{"Rillaboom","100","125","DrumBeating","WoodHammer","KnockOff","Uturn"},
{"Scorbunny","50","71","Tackle","Ember","QuickAttack","DoubleKick"},
{"Raboot","65","86","FlameCharge","QuickAttack","DoubleKick","Agility"},
{"Cinderace","80","116","PyroBall","HighJumpKick","Uturn","SuckerPunch"},
{"Sobble","50","40","WaterGun","Pound","Bind","Growl"},
{"Drizzile","65","60","WaterPulse","SnipeShot","TearfulLook","Uturn"},
{"Inteleon","70","85","SnipeShot","IceBeam","DarkPulse","Uturn"},
{"Skwovet","70","55","Tackle","Bite","StuffCheeks","BulletSeed"},
{"Greedent","120","95","BodySlam","Crunch","StuffCheeks","BulletSeed"},
{"Rookidee","38","47","Peck","Leer","PowerTrip","HoneClaws"},
{"Corvisquire","68","67","Pluck","DrillPeck","Taunt","Roost"},
{"Corviknight","98","87","BraveBird","IronHead","Roost","BulkUp"},
{"Blipbug","25","20","StruggleBug","Infestation","Recover","StickyWeb"},
{"Dottler","50","35","Confusion","LightScreen","Reflect","Recover"},
{"Orbeetle","60","45","Psychic","BugBuzz","CalmMind","Recover"},
{"Nickit","40","28","QuickAttack","Snarl","BeatUp","HoneClaws"},
{"Thievul","70","58","NightSlash","Snarl","Psychic","NastyPlot"},
{"Gossifleur","40","40","Leafage","RapidSpin","LeechSeed","StunSpore"},
{"Eldegoss","60","50","LeafStorm","CottonGuard","LeechSeed","PollenPuff"},
{"Wooloo","42","40","Tackle","DefenseCurl","Copycat","TakeDown"},
{"Dubwool","72","80","BodySlam","CottonGuard","DoubleKick","ZenHeadbutt"},
{"Chewtle","50","64","WaterGun","Bite","Protect","Headbutt"},
{"Drednaw","90","115","Liquidation","Crunch","RockSlide","SwordsDance"},
{"Yamper","59","45","Spark","Nuzzle","Bite","Roar"},
{"Boltund","69","90","Thunderbolt","Crunch","PlayRough","VoltSwitch"},
{"Rolycoly","30","40","SmackDown","RapidSpin","HeatCrash","StealthRock"},
{"Carkol","80","60","FlameCharge","RockSlide","WillOWisp","StealthRock"},
{"Coalossal","110","80","HeatCrash","StoneEdge","StealthRock","WillOWisp"},
{"Applin","40","40","Astonish","Withdraw","Recycle","BulletSeed"},
{"Flapple","70","110","GravApple","DragonRush","SuckerPunch","DragonDance"},
{"Appletun","110","85","AppleAcid","DragonPulse","Recover","LeechSeed"},
{"Silicobra","52","57","SandAttack","MudSlap","Glare","Headbutt"},
{"Sandaconda","72","107","Earthquake","Glare","Coil","StoneEdge"},
{"Cramorant","70","85","Surf","AirSlash","Dive","Roost"},
{"Arrokuda","41","63","AquaJet","Bite","Agility","Crunch"},
{"Barraskewda","61","123","Liquidation","Crunch","CloseCombat","PsychicFangs"},
{"Toxel","40","38","Nuzzle","Acid","Flail","Growl"},
{"Toxtricity","75","98","Overdrive","SludgeBomb","Boomburst","ShiftGear"},
{"Sizzlipede","50","65","Ember","BugBite","Coil","FlameWheel"},
{"Centiskorch","100","115","FireLash","LeechLife","Coil","PowerWhip"},
{"Clobbopus","50","68","RockSmash","Bind","Detect","PowerUpPunch"},
{"Grapploct","80","118","Octolock","CloseCombat","IcePunch","SuckerPunch"},
{"Sinistea","40","45","Astonish","MegaDrain","Protect","ShadowBall"},
{"Polteageist","60","65","ShadowBall","GigaDrain","ShellSmash","StoredPower"},
{"Hatenna","42","30","Confusion","PlayNice","LifeDew","DisarmingVoice"},
{"Hattrem","57","40","Psybeam","DisarmingVoice","CalmMind","HealingWish"},
{"Hatterene","57","90","Psychic","DazzlingGleam","CalmMind","MysticalFire"},
{"Impidimp","45","45","Bite","PlayRough","Taunt","FoulPlay"},
{"Morgrem","65","60","FalseSurrender","PlayRough","Torment","FoulPlay"},
{"Grimmsnarl","95","120","SpiritBreak","DarkestLariat","BulkUp","ThunderWave"},
{"Obstagoon","93","90","Obstruct","KnockOff","Facade","CloseCombat"},
{"Perrserker","70","110","IronHead","PlayRough","SwordsDance","CloseCombat"},
{"Cursola","60","95","ShadowBall","EarthPower","WillOWisp","StrengthSap"},
{"Sirfetchd","62","135","MeteorAssault","CloseCombat","LeafBlade","BraveBird"},
{"MrRime","80","85","FreezeDry","Psychic","NastyPlot","IceBeam"},
{"Runerigus","58","95","ShadowClaw","Earthquake","WillOWisp","StealthRock"},
{"Milcery","45","40","SweetKiss","DrainingKiss","Aromatherapy","Decorate"},
{"Alcremie","65","60","DazzlingGleam","MysticalFire","Recover","CalmMind"},
{"Falinks","65","100","NoRetreat","CloseCombat","Megahorn","IronDefense"},
{"Pincurchin","48","101","Thunderbolt","Scald","Spikes","Recover"},
{"Snom","30","25","PowderSnow","StruggleBug","Mist","IceShard"},
{"Frosmoth","70","65","IceBeam","BugBuzz","QuiverDance","Hurricane"},
{"Stonjourner","100","125","StoneEdge","Earthquake","HeavySlam","RockSlide"},
{"Eiscue","75","80","IcicleCrash","ZenHeadbutt","BellyDrum","Substitute"},
{"Indeedee","60","65","Psychic","HyperVoice","CalmMind","HelpingHand"},
{"Morpeko","58","95","AuraWheel","Crunch","QuickAttack","PartingShot"},
{"Cufant","72","80","Tackle","Rollout","IronHead","Bulldoze"},
{"Copperajah","122","130","HeavySlam","Earthquake","PlayRough","StealthRock"},
{"Dracozolt","90","100","BoltBeak","DragonClaw","Earthquake","AerialAce"},
{"Arctozolt","90","100","BoltBeak","IcicleCrash","FreezeDry","Thunderbolt"},
{"Dracovish","90","90","FishiousRend","Crunch","PsychicFangs","IceFang"},
{"Arctovish","90","90","FishiousRend","IcicleCrash","Waterfall","FreezeDry"},
{"Duraludon","70","95","FlashCannon","DragonPulse","Thunderbolt","StealthRock"},
{"Dreepy","28","60","Astonish","Infestation","QuickAttack","Bite"},
{"Drakloak","68","80","DragonPulse","ShadowBall","Uturn","Bite"},
{"Dragapult","88","120","DragonDarts","ShadowBall","Flamethrower","Uturn"},
{"Zacian","92","120","BehemothBlade","PlayRough","CloseCombat","SwordsDance"},
{"Zamazenta","92","120","BehemothBash","CloseCombat","Crunch","IronDefense"},
{"Eternatus","140","85","DynamaxCannon","SludgeBomb","Flamethrower","Recover"},
{"Kubfu","60","90","AerialAce","BrickBreak","Detect","BulkUp"},
{"Urshifu","100","130","WickedBlow","CloseCombat","Uturn","AquaJet"},
{"Zarude","105","120","PowerWhip","DarkestLariat","Uturn","JungleHealing"},
{"Regieleki","80","100","Thunderbolt","VoltSwitch","Electroweb","RapidSpin"},
{"Regidrago","200","100","DragonEnergy","DragonClaw","Earthquake","FireFang"},
{"Glastrier","100","145","IcicleCrash","HighHorsepower","SwordsDance","CloseCombat"},
{"Spectrier","100","65","ShadowBall","NastyPlot","WillOWisp","Hex"},
{"Calyrex","100","80","Psychic","GigaDrain","NastyPlot","LeechSeed"},
{"Sprigatito","40","61","Leafage","Scratch","TailWhip","Bite"},
{"Floragato","61","80","MagicalLeaf","Bite","Uturn","HoneClaws"},
{"Meowscarada","76","110","FlowerTrick","NightSlash","Uturn","PlayRough"},
{"Fuecoco","67","45","Ember","Tackle","Leer","Round"},
{"Crocalor","81","55","Incinerate","Bite","Yawn","Round"},
{"Skeledirge","104","75","TorchSong","ShadowBall","SlackOff","WillOWisp"},
{"Quaxly","55","65","WaterGun","Pound","Growl","WingAttack"},
{"Quaxwell","70","85","AquaJet","WingAttack","WorkUp","Roost"},
{"Quaquaval","85","120","AquaStep","CloseCombat","BraveBird","SwordsDance"},
{"Lechonk","54","45","Tackle","TailWhip","DisarmingVoice","MudShot"},
{"Oinkologne","110","100","BodySlam","Dig","PlayRough","Yawn"},
{"Tarountula","35","41","StruggleBug","Infestation","BugBite","Assurance"},
{"Spidops","60","79","SkitterSmack","SuckerPunch","Spikes","StickyWeb"},
{"Nymble","33","46","BugBite","DoubleKick","Agility","AerialAce"},
{"Lokix","71","102","FirstImpression","AxeKick","SuckerPunch","Uturn"},
{"Pawmi","45","50","ThunderShock","QuickAttack","Spark","Nuzzle"},
{"Pawmo","60","75","Spark","LowKick","Charge","VoltSwitch"},
{"Pawmot","70","115","DoubleShock","CloseCombat","IcePunch","RevivalBlessing"},
{"Tandemaus","50","50","Tackle","BabyDollEyes","Bite","FollowMe"},
{"Maushold","74","75","PopulationBomb","Bite","BulletSeed","Encore"},
{"Fidough","37","55","PlayRough","Lick","Charm","Bite"},
{"Dachsbun","57","80","PlayRough","Crunch","BodyPress","Wish"},
{"Smoliv","41","35","Absorb","Tackle","SweetScent","MegaDrain"},
{"Dolliv","52","53","MagicalLeaf","Growth","LeechSeed","BulletSeed"},
{"Arboliva","78","69","EnergyBall","EarthPower","LeechSeed","Synthesis"},
{"Squawkabilly","82","96","BraveBird","Facade","Uturn","PartingShot"},
{"Nacli","55","55","RockThrow","Harden","SmackDown","Recover"},
{"Naclstack","60","60","RockSlide","Recover","IronDefense","SaltCure"},
{"Garganacl","100","100","SaltCure","Recover","BodyPress","Earthquake"},
{"Charcadet","40","50","Ember","ClearSmog","QuickAttack","FlameCharge"},
{"Armarouge","85","60","ArmorCannon","Psychic","AuraSphere","CalmMind"},
{"Ceruledge","75","125","BitterBlade","ShadowSneak","SwordsDance","CloseCombat"},
{"Tadbulb","61","31","ThunderShock","WaterGun","Charge","MudShot"},
{"Bellibolt","109","64","Thunderbolt","MuddyWater","ParabolicCharge","SlackOff"},
{"Wattrel","40","40","Peck","ThunderShock","QuickAttack","Charge"},
{"Kilowattrel","70","70","Thunderbolt","Hurricane","VoltSwitch","Roost"},
{"Maschiff","60","78","Bite","Snarl","ScaryFace","PlayRough"},
{"Mabosstiff","80","120","Crunch","PlayRough","PsychicFangs","JawLock"},
{"Shroodle","40","65","PoisonFang","Scratch","Taunt","Slash"},
{"Grafaiai","63","95","PoisonJab","KnockOff","Uturn","PartingShot"},
{"Bramblin","40","65","Rollout","ShadowSneak","LeechSeed","BulletSeed"},
{"Brambleghast","55","115","PowerWhip","ShadowSneak","Spikes","StrengthSap"},
{"Toedscool","40","35","Absorb","MudSlap","RapidSpin","Spore"},
{"Toedscruel","80","70","EarthPower","GigaDrain","Spore","RapidSpin"},
{"Klawf","70","100","RockSlide","Crabhammer","SwordsDance","XScissor"},
{"Capsakid","50","62","BulletSeed","Bite","Growth","Trailblaze"},
{"Scovillain","65","108","Flamethrower","SeedBomb","Growth","Crunch"},
{"Rellor","41","50","Rollout","StruggleBug","MudShot","Recover"},
{"Rabsca","75","50","Psychic","BugBuzz","Recover","TrickRoom"},
{"Flittle","30","35","Confusion","Psybeam","Agility","LightScreen"},
{"Espathra","95","60","LuminaCrash","Psychic","CalmMind","DazzlingGleam"},
{"Tinkatink","50","45","PlayRough","FakeOut","RockSmash","SkitterSmack"},
{"Tinkatuff","65","55","PlayRough","RockSlide","FakeOut","KnockOff"},
{"Tinkaton","85","75","GigatonHammer","PlayRough","KnockOff","SwordsDance"},
{"Wiglett","10","55","WaterGun","MudSlap","Dig","SuckerPunch"},
{"Wugtrio","35","100","TripleDive","SuckerPunch","AquaJet","SandAttack"},
{"Bombirdier","70","103","RockSlide","KnockOff","Uturn","Roost"},
{"Finizen","70","45","WaterGun","Charm","Acrobatics","AquaJet"},
{"Palafin","100","70","JetPunch","WaveCrash","CloseCombat","IcePunch"},
{"Varoom","45","70","PoisonGas","GyroBall","ToxicSpikes","Assurance"},
{"Revavroom","80","119","SpinOut","GunkShot","ShiftGear","IronHead"},
{"Cyclizar","70","95","DragonClaw","Uturn","RapidSpin","KnockOff"},
{"Orthworm","70","85","IronTail","BodyPress","Coil","Earthquake"},
{"Glimmet","48","35","PowerGem","Acid","RockThrow","ToxicSpikes"},
{"Glimmora","83","55","PowerGem","SludgeWave","EarthPower","StealthRock"},
{"Greavard","50","61","Bite","ShadowSneak","Roar","Dig"},
{"Houndstone","72","101","LastRespects","ShadowBall","PlayRough","WillOWisp"},
{"Flamigo","82","115","CloseCombat","BraveBird","Roost","BulkUp"},
{"Cetoddle","108","68","PowderSnow","BodySlam","Amnesia","IceShard"},
{"Cetitan","170","113","IceSpinner","Earthquake","BellyDrum","IceShard"},
{"Veluza","90","102","AquaCutter","PsychoCut","Crunch","Agility"},
{"Dondozo","150","100","WaveCrash","BodyPress","Rest","Curse"},
{"Tatsugiri","68","50","DragonPulse","Surf","NastyPlot","MuddyWater"},
{"Annihilape","110","115","RageFist","CloseCombat","Uturn","BulkUp"},
{"Clodsire","130","75","Earthquake","PoisonJab","Recover","Toxic"},
{"Farigiraf","120","90","TwinBeam","Psychic","Crunch","Agility"},
{"Dudunsparce","125","100","HyperDrill","BodySlam","Roost","Coil"},
{"Kingambit","100","135","KowtowCleave","IronHead","SwordsDance","SuckerPunch"},
{"GreatTusk","115","131","HeadlongRush","CloseCombat","IceSpinner","RapidSpin"},
{"ScreamTail","115","65","PlayRough","HyperVoice","Wish","Protect"},
{"BruteBonnet","111","127","SeedBomb","SuckerPunch","Spore","Crunch"},
{"FlutterMane","55","55","ShadowBall","Moonblast","MysticalFire","CalmMind"},
{"SlitherWing","85","135","FirstImpression","CloseCombat","LeechLife","FlareBlitz"},
{"SandyShocks","85","81","Thunderbolt","EarthPower","VoltSwitch","StealthRock"},
{"IronTreads","90","112","Earthquake","IronHead","RapidSpin","StealthRock"},
{"IronBundle","56","80","FreezeDry","HydroPump","FlipTurn","IceBeam"},
{"IronHands","154","140","DrainPunch","WildCharge","IcePunch","SwordsDance"},
{"IronJugulis","94","80","DarkPulse","AirSlash","Flamethrower","Uturn"},
{"IronMoth","80","70","FieryDance","SludgeWave","EnergyBall","MorningSun"},
{"IronThorns","100","134","StoneEdge","WildCharge","DragonDance","Earthquake"},
{"Frigibax","65","75","DragonBreath","IceFang","Bite","IcyWind"},
{"Arctibax","90","95","DragonClaw","IceFang","Crunch","DragonDance"},
{"Baxcalibur","115","145","GlaiveRush","IcicleCrash","Earthquake","DragonDance"},
{"Gimmighoul","45","30","Astonish","ConfuseRay","NightShade","Recover"},
{"Gholdengo","87","60","MakeItRain","ShadowBall","NastyPlot","Recover"},
{"WoChien","85","85","GigaDrain","FoulPlay","LeechSeed","Protect"},
{"ChienPao","80","120","IcicleCrash","Crunch","SuckerPunch","SacredSword"},
{"TingLu","155","110","Earthquake","Ruination","StoneEdge","Whirlwind"},
{"ChiYu","55","80","Overheat","DarkPulse","Flamethrower","NastyPlot"},
{"RoaringMoon","105","139","DragonClaw","Crunch","DragonDance","Acrobatics"},
{"IronValiant","74","130","Moonblast","CloseCombat","PsychoCut","SwordsDance"},
{"Koraidon","100","135","CollisionCourse","DragonClaw","FlareBlitz","SwordsDance"},
{"Miraidon","100","85","ElectroDrift","DragonPulse","CalmMind","ParabolicCharge"},
{"WalkingWake","99","83","HydroSteam","DragonPulse","Flamethrower","CalmMind"},
{"IronLeaves","90","130","LeafBlade","Psyblade","SwordsDance","SacredSword"},
{"Dipplin","80","80","SyrupBomb","DragonPulse","Recover","Growth"},
{"Poltchageist","40","45","ShadowBall","MegaDrain","CalmMind","Astonish"},
{"Sinistcha","71","60","MatchaGotcha","ShadowBall","CalmMind","StrengthSap"},
{"Okidogi","88","128","PoisonJab","CloseCombat","BulkUp","Crunch"},
{"Munkidori","88","75","Psychic","SludgeWave","NastyPlot","ShadowBall"},
{"Fezandipiti","88","91","PlayRough","BraveBird","Roost","Uturn"},
{"Ogerpon","80","120","IvyCudgel","HornLeech","Uturn","SwordsDance"},
{"Archaludon","90","105","ElectroShot","DragonPulse","FlashCannon","BodyPress"},
{"Hydrapple","106","80","FickleBeam","EnergyBall","Recover","EarthPower"},
{"GougingFire","105","115","FlareBlitz","DragonClaw","DragonDance","MorningSun"},
{"RagingBolt","125","73","Thunderbolt","DragonPulse","CalmMind","Thunderclap"},
{"IronBoulder","90","120","StoneEdge","Psyblade","SwordsDance","CloseCombat"},
{"IronCrown","90","72","FlashCannon","Psychic","CalmMind","VoltSwitch"},
{"Terapagos","90","65","TeraStarstorm","PowerGem","CalmMind","Recover"},
{"Pecharunt","88","88","MalignantChain","ShadowBall","NastyPlot","Recover"}
    };

	cout << "Welcome player one! Please choose your starter pokemon!" << endl;
    cout << "Enter the name of your pokemon: ";
	bat.p1(bat.getNameP1(), bat.getHpP1(), bat.getAttkP1(), bat.getLvlP1(), bat.getMove1P1(), bat.getMove2P1(), bat.getMove3P1(), bat.getMove4P1());
	bat.p2(bat.getNameP2(), bat.getHpP2(), bat.getAttkP2(), bat.getLvlP2() , bat.getMove1P2(), bat.getMove2P2(), bat.getMove3P2(), bat.getMove4P2());
    cin >> name;
    bat.setNameP1(name);
    if (name.empty())
    {
        cout << "Please enter a valid pokemon name." << endl;
    }
    else
    {
        string targetName = bat.getNameP1();

        auto it = std::find_if(pokedex.begin(), pokedex.end(), [&](const vector<string>& p) {
            return p[0] == targetName;
            });
        if (it != pokedex.end()) {
            int hp = stoi((*it)[1]);
            int attk = stoi((*it)[2]);
            string move1 = (*it)[3];
            string move2 = (*it)[4];
            string move3 = (*it)[5];
            string move4 = (*it)[6];
            bat.setHpP1(hp);
            bat.setAttkP1(attk);
            bat.setMove1P1(move1);
            bat.setMove2P1(move2);
            bat.setMove3P1(move3);
            bat.setMove4P1(move4);

            if (it != pokedex.end()) {
                int index = std::distance(pokedex.begin(), it);
                if ((*it)[0] == bat.getNameP1())
                {
                    cout << "You used " << bat.getNameP1() << "!" << endl;
                    cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                    int choice = 0;
                    while (choice < 1 || choice > 4)
                    {
                        cout << "Choose a move: " << endl;
                        cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                        cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << ":> ";
                        cin >> choice;

                        switch (choice)
                        {
                        case 1:
                            cout << "You used " << bat.getMove1P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= attk;
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;
                                cout << "Enter the name of your pokemon: ";
                                cin >> name;
                                bat.setNameP1(name);
                                if (name.empty())
                                {
                                    cout << "\nPlease enter a valid pokemon name." << endl;
                                    cin >> name;
									bat.setNameP1(name);
                                }
                                else
                                {
                                    string targetName = bat.getNameP1();

                                    auto it = std::find_if(pokedex.begin(), pokedex.end(), [&](const vector<string>& p) {
                                        return p[0] == targetName;
                                        });
                                    if (it != pokedex.end()) {
                                        int hp = stoi((*it)[1]);
                                        int attk = stoi((*it)[2]);
                                        string move1 = (*it)[3];
                                        string move2 = (*it)[4];
                                        string move3 = (*it)[5];
                                        string move4 = (*it)[6];
                                        bat.setHpP1(hp);
                                        bat.setAttkP1(attk);
                                        bat.setMove1P1(move1);
                                        bat.setMove2P1(move2);
                                        bat.setMove3P1(move3);
                                        bat.setMove4P1(move4);

                                        if (it != pokedex.end()) {
                                            int index = std::distance(pokedex.begin(), it);
                                            if ((*it)[0] == bat.getNameP1())
                                            {
                                                cout << "You used " << bat.getNameP1() << "!" << endl;
                                                cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                                                int choice = 0;
                                                while (choice < 1 || choice > 4)
                                                {
                                                    cout << "Choose a move: " << endl;
                                                    cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                    cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                                                    cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                    cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                    cout << ":> ";
                                                    cin >> choice;

                                                    switch (choice)
                                                    {
                                                    case 1:
                                                        cout << "You used " << bat.getMove1P1() << "!" << endl;
                                                        cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                        hp -= attk;
                                                        if (hp <= 0)
                                                        {
                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;
                                                            cout << "Enter the name of your pokemon: ";
                                                            cin >> name;
                                                            bat.setNameP1(name);
                                                            if (name.empty())
                                                            {
                                                                cout << "\nPlease enter a valid pokemon name." << endl;
                                                                cin >> name;
                                                                bat.setNameP1(name);
                                                            }
                                                            else
                                                            {
                                                                string targetName = bat.getNameP1();

                                                                auto it = std::find_if(pokedex.begin(), pokedex.end(), [&](const vector<string>& p) {
                                                                    return p[0] == targetName;
                                                                    });
                                                                if (it != pokedex.end()) {
                                                                    int hp = stoi((*it)[1]);
                                                                    int attk = stoi((*it)[2]);
                                                                    string move1 = (*it)[3];
                                                                    string move2 = (*it)[4];
                                                                    string move3 = (*it)[5];
                                                                    string move4 = (*it)[6];
                                                                    bat.setHpP1(hp);
                                                                    bat.setAttkP1(attk);
                                                                    bat.setMove1P1(move1);
                                                                    bat.setMove2P1(move2);
                                                                    bat.setMove3P1(move3);
                                                                    bat.setMove4P1(move4);

                                                                    if (it != pokedex.end()) {
                                                                        int index = std::distance(pokedex.begin(), it);
                                                                        if ((*it)[0] == bat.getNameP1())
                                                                        {
                                                                            cout << "You used " << bat.getNameP1() << "!" << endl;
																			cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;
                                                                            cout << "Enter the name of your pokemon: ";
                                                                            cin >> name;
                                                                            bat.setNameP1(name);
                                                                            if (name.empty())
                                                                            {
                                                                                cout << "\nPlease enter a valid pokemon name." << endl;
                                                                                cin >> name;
                                                                                bat.setNameP1(name);
                                                                            }
                                                                            else
                                                                            {
                                                                                string targetName = bat.getNameP1();

                                                                                auto it = std::find_if(pokedex.begin(), pokedex.end(), [&](const vector<string>& p) {
                                                                                    return p[0] == targetName;
                                                                                    });
                                                                                if (it != pokedex.end()) {
                                                                                    int hp = stoi((*it)[1]);
                                                                                    int attk = stoi((*it)[2]);
                                                                                    string move1 = (*it)[3];
                                                                                    string move2 = (*it)[4];
                                                                                    string move3 = (*it)[5];
                                                                                    string move4 = (*it)[6];
                                                                                    bat.setHpP1(hp);
                                                                                    bat.setAttkP1(attk);
                                                                                    bat.setMove1P1(move1);
                                                                                    bat.setMove2P1(move2);
                                                                                    bat.setMove3P1(move3);
                                                                                    bat.setMove4P1(move4);

                                                                                    if (it != pokedex.end()) {
                                                                                        int index = std::distance(pokedex.begin(), it);
                                                                                        if ((*it)[0] == bat.getNameP1())
                                                                                        {
                                                                                            cout << "You used " << bat.getNameP1() << "!" << endl;
                                                                                            cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                                                                                            int choice = 0;
                                                                                            while (choice < 1 || choice > 4)
                                                                                            {
                                                                                                cout << "Choose a move: " << endl;
                                                                                                cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                                                                                                cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                cout << ":> ";
                                                                                                cin >> choice;

                                                                                                switch (choice)
                                                                                                {
                                                                                                case 1:
                                                                                                    cout << "You used " << bat.getMove1P1() << "!" << endl;
                                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                    hp -= attk;
                                                                                                    if (hp <= 0)
                                                                                                    {
                                                                                                        cout << "Enter the name of your pokemon: ";
                                                                                                        cin >> name;
                                                                                                        bat.setNameP1(name);
                                                                                                        if (name.empty())
                                                                                                        {
                                                                                                            cout << "Please enter a valid pokemon name." << endl;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            string targetName = bat.getNameP1();

                                                                                                            auto it = std::find_if(pokedex.begin(), pokedex.end(), [&](const vector<string>& p) {
                                                                                                                return p[0] == targetName;
                                                                                                                });
                                                                                                            if (it != pokedex.end()) {
                                                                                                                int hp = stoi((*it)[1]);
                                                                                                                int attk = stoi((*it)[2]);
                                                                                                                string move1 = (*it)[3];
                                                                                                                string move2 = (*it)[4];
                                                                                                                string move3 = (*it)[5];
                                                                                                                string move4 = (*it)[6];
                                                                                                                bat.setHpP1(hp);
                                                                                                                bat.setAttkP1(attk);
                                                                                                                bat.setMove1P1(move1);
                                                                                                                bat.setMove2P1(move2);
                                                                                                                bat.setMove3P1(move3);
                                                                                                                bat.setMove4P1(move4);

                                                                                                                if (it != pokedex.end()) {
                                                                                                                    int index = std::distance(pokedex.begin(), it);
                                                                                                                    if ((*it)[0] == bat.getNameP1())
                                                                                                                    {
                                                                                                                        cout << "You used " << bat.getNameP1() << "!" << endl;
                                                                                                                        cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                                                                                                                        int choice = 0;
                                                                                                                        while (choice < 1 || choice > 4)
                                                                                                                        {
                                                                                                                            cout << "Choose a move: " << endl;
                                                                                                                            cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                                            cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                                                                                                                            cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                                            cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                                            cout << ":> ";
                                                                                                                            cin >> choice;

                                                                                                                            switch (choice)
                                                                                                                            {
                                                                                                                            case 1:
                                                                                                                                cout << "You used " << bat.getMove1P1() << "!" << endl;
                                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                                hp -= attk;
                                                                                                                                if (hp <= 0)
                                                                                                                                {
                                                                                                                                    cout << "Your Pokemon fainted! Ch!" << endl;

                                                                                                                                }
                                                                                                                                else
                                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                                break;
                                                                                                                            case 2:
                                                                                                                                cout << "You used " << bat.getMove2P1() << "!" << endl;
                                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                                hp -= bat.getAttkP1();
                                                                                                                                if (hp <= 0)
                                                                                                                                {
                                                                                                                                    cout << "Your Pokemon fainted! Game Over!" << endl;

                                                                                                                                }
                                                                                                                                else
                                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                                break;
                                                                                                                            case 3:
                                                                                                                                cout << "You used " << bat.getMove3P1() << "!" << endl;
                                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                                hp -= bat.getAttkP1();
                                                                                                                                if (hp <= 0)
                                                                                                                                {
                                                                                                                                    cout << "Your Pokemon fainted! Game Over!" << endl;

                                                                                                                                }
                                                                                                                                else
                                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                                break;
                                                                                                                            case 4:
                                                                                                                                cout << "You used " << bat.getMove4P1() << "!" << endl;
                                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                                hp -= bat.getAttkP1();
                                                                                                                                if (hp <= 0)
                                                                                                                                {
                                                                                                                                    cout << "Your Pokemon fainted! Game Over!" << endl;

                                                                                                                                }
                                                                                                                                else
                                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                                break;
                                                                                                                            default:
                                                                                                                                cout << "Invalid choice. Please choose a move between 1 and 4." << endl;
                                                                                                                                break;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }


                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    cout << "Pokemon not found. Please enter a valid pokemon name." << endl;
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }

                                                                                                    }
                                                                                                    else
                                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                                    break;
                                                                                                case 2:
                                                                                                    cout << "You used " << bat.getMove2P1() << "!" << endl;
                                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                    hp -= bat.getAttkP1();
                                                                                                    if (hp <= 0)
                                                                                                    {
                                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                    }
                                                                                                    else
                                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                                    break;
                                                                                                case 3:
                                                                                                    cout << "You used " << bat.getMove3P1() << "!" << endl;
                                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                    hp -= bat.getAttkP1();
                                                                                                    if (hp <= 0)
                                                                                                    {
                                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                    }
                                                                                                    else
                                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                                    break;
                                                                                                case 4:
                                                                                                    cout << "You used " << bat.getMove4P1() << "!" << endl;
                                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                    hp -= bat.getAttkP1();
                                                                                                    if (hp <= 0)
                                                                                                    {
                                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                    }
                                                                                                    else
                                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                                    break;
                                                                                                default:
                                                                                                    cout << "Invalid choice. Please choose a move between 1 and 4." << endl;
                                                                                                    break;
                                                                                                }
                                                                                            }
                                                                                        }


                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cout << "Pokemon not found. Please enter a valid pokemon name." << endl;
                                                                                        cin >> name;
                                                                                        bat.setNameP1(name);
                                                                                    }
                                                                                }
                                                                            }
                                                                            int choice = 0;
                                                                            while (choice < 1 || choice > 4)
                                                                            {
                                                                                cout << "Choose a move: " << endl;
                                                                                cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                                                                                cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                cout << ":> ";
                                                                                cin >> choice;

                                                                                switch (choice)
                                                                                {
                                                                                case 1:
                                                                                    cout << "You used " << bat.getMove1P1() << "!" << endl;
                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                    hp -= attk;
                                                                                    if (hp <= 0)
                                                                                    {
                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;
                                                                                        cout << "Enter the name of your pokemon: ";
                                                                                        cin >> name;
                                                                                        bat.setNameP1(name);
                                                                                        if (name.empty())
                                                                                        {
                                                                                            cout << "\nPlease enter a valid pokemon name." << endl;
                                                                                            cin >> name;
                                                                                            bat.setNameP1(name);
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            string targetName = bat.getNameP1();

                                                                                            auto it = std::find_if(pokedex.begin(), pokedex.end(), [&](const vector<string>& p) {
                                                                                                return p[0] == targetName;
                                                                                                });
                                                                                            if (it != pokedex.end()) {
                                                                                                int hp = stoi((*it)[1]);
                                                                                                int attk = stoi((*it)[2]);
                                                                                                string move1 = (*it)[3];
                                                                                                string move2 = (*it)[4];
                                                                                                string move3 = (*it)[5];
                                                                                                string move4 = (*it)[6];
                                                                                                bat.setHpP1(hp);
                                                                                                bat.setAttkP1(attk);
                                                                                                bat.setMove1P1(move1);
                                                                                                bat.setMove2P1(move2);
                                                                                                bat.setMove3P1(move3);
                                                                                                bat.setMove4P1(move4);

                                                                                                if (it != pokedex.end()) {
                                                                                                    int index = std::distance(pokedex.begin(), it);
                                                                                                    if ((*it)[0] == bat.getNameP1())
                                                                                                    {
                                                                                                        cout << "You used " << bat.getNameP1() << "!" << endl;
                                                                                                        cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                                                                                                        int choice = 0;
                                                                                                        while (choice < 1 || choice > 4)
                                                                                                        {
                                                                                                            cout << "Choose a move: " << endl;
                                                                                                            cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                            cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                                                                                                            cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                            cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                            cout << ":> ";
                                                                                                            cin >> choice;

                                                                                                            switch (choice)
                                                                                                            {
                                                                                                            case 1:
                                                                                                                cout << "You used " << bat.getMove1P1() << "!" << endl;
                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                hp -= attk;
                                                                                                                if (hp <= 0)
                                                                                                                {
                                                                                                                    cout << "Your last Pokemon has fainted! Chose another Pokemon!" << endl;

                                                                                                                }
                                                                                                                else
                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                break;
                                                                                                            case 2:
                                                                                                                cout << "You used " << bat.getMove2P1() << "!" << endl;
                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                hp -= bat.getAttkP1();
                                                                                                                if (hp <= 0)
                                                                                                                {
                                                                                                                    cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                                }
                                                                                                                else
                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                break;
                                                                                                            case 3:
                                                                                                                cout << "You used " << bat.getMove3P1() << "!" << endl;
                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                hp -= bat.getAttkP1();
                                                                                                                if (hp <= 0)
                                                                                                                {
                                                                                                                    cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                                }
                                                                                                                else
                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                break;
                                                                                                            case 4:
                                                                                                                cout << "You used " << bat.getMove4P1() << "!" << endl;
                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                hp -= bat.getAttkP1();
                                                                                                                if (hp <= 0)
                                                                                                                {
                                                                                                                    cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                                }
                                                                                                                else
                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                break;
                                                                                                            default:
                                                                                                                cout << "Invalid choice. Please choose a move between 1 and 4." << endl;
                                                                                                                break;
                                                                                                            }
                                                                                                        }
                                                                                                    }


                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    cout << "Pokemon not found. Please enter a valid pokemon name." << endl;
                                                                                                    cin >> name;
                                                                                                    bat.setNameP1(name);
                                                                                                }
                                                                                            }
                                                                                        }

                                                                                    }
                                           
                                         else
                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                    break;
                                                                                case 2:
                                                                                    cout << "You used " << bat.getMove2P1() << "!" << endl;
                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                    hp -= bat.getAttkP1();
                                                                                    if (hp <= 0)
                                                                                    {
                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                    }
                                                                                    else
                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                    break;
                                                                                case 3:
                                                                                    cout << "You used " << bat.getMove3P1() << "!" << endl;
                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                    hp -= bat.getAttkP1();
                                                                                    if (hp <= 0)
                                                                                    {
                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                    }
                                                                                    else
                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                    break;
                                                                                case 4:
                                                                                    cout << "You used " << bat.getMove4P1() << "!" << endl;
                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                    hp -= bat.getAttkP1();
                                                                                    if (hp <= 0)
                                                                                    {
                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                    }
                                                                                    else
                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                    break;
                                                                                default:
                                                                                    cout << "Invalid choice. Please choose a move between 1 and 4." << endl;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }


                                                                    }
                                                                    else
                                                                    {
                                                                        cout << "Pokemon not found. Please enter a valid pokemon name." << endl;
                                                                        cin >> name;
                                                                        bat.setNameP1(name);
                                                                    }
                                                                }
                                                            }

                                                        }
                                                        else
                                                            cout << "You now have " << hp << " HP left!" << endl;
                                                        break;
                                                    case 2:
                                                        cout << "You used " << bat.getMove2P1() << "!" << endl;
                                                        cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                        hp -= bat.getAttkP1();
                                                        if (hp <= 0)
                                                        {
                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                        }
                                                        else
                                                            cout << "You now have " << hp << " HP left!" << endl;
                                                        break;
                                                    case 3:
                                                        cout << "You used " << bat.getMove3P1() << "!" << endl;
                                                        cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                        hp -= bat.getAttkP1();
                                                        if (hp <= 0)
                                                        {
                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                        }
                                                        else
                                                            cout << "You now have " << hp << " HP left!" << endl;
                                                        break;
                                                    case 4:
                                                        cout << "You used " << bat.getMove4P1() << "!" << endl;
                                                        cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                        hp -= bat.getAttkP1();
                                                        if (hp <= 0)
                                                        {
                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                        }
                                                        else
                                                            cout << "You now have " << hp << " HP left!" << endl;
                                                        break;
                                                    default:
                                                        cout << "Invalid choice. Please choose a move between 1 and 4." << endl;
                                                        break;
                                                    }
                                                }
                                            }


                                        }
                                        else
                                        {
                                            cout << "Pokemon not found. Please enter a valid pokemon name." << endl;
											cin >> name;
											bat.setNameP1(name);
                                        }
                                    }
                                }
                            }
                            else
                            {
                                cout << "You now have " << hp << " HP left!" << endl;
                            }
                            break;
                        case 2:
                            cout << "You used " << bat.getMove2P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 3:
                            cout << "You used " << bat.getMove3P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 4:
                            cout << "You used " << bat.getMove4P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please choose a move between 1 and 4." << endl;
                            break;
                        }
                    }
                }


            }
            else
            {
                cout << "Pokemon not found. Please enter a valid pokemon name." << endl;
            }

        }
    }
    cout << "Welcome player two! Please choose your starter pokemon!" << endl;
    cout << "Enter the name of your pokemon: ";
    cin >> name;
    bat.setNameP1(name);
    if (name.empty())
    {
        cout << "Please enter a valid pokemon name." << endl;
    }
    else
    {
        string targetName = bat.getNameP1();

        auto it = std::find_if(pokedex.begin(), pokedex.end(), [&](const vector<string>& p) {
            return p[0] == targetName;
            });
        if (it != pokedex.end()) {
            int hp = stoi((*it)[1]);
            int attk = stoi((*it)[2]);
            string move1 = (*it)[3];
            string move2 = (*it)[4];
            string move3 = (*it)[5];
            string move4 = (*it)[6];
            bat.setHpP1(hp);
            bat.setAttkP1(attk);
            bat.setMove1P1(move1);
            bat.setMove2P1(move2);
            bat.setMove3P1(move3);
            bat.setMove4P1(move4);

            if (it != pokedex.end()) {
                int index = std::distance(pokedex.begin(), it);
                if ((*it)[0] == bat.getNameP1())
                {
                    cout << "You used " << bat.getNameP1() << "!" << endl;
                    cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                    int choice = 0;
                    while (choice < 1 || choice > 4)
                    {
                        cout << "Choose a move: " << endl;
                        cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                        cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << ":> ";
                        cin >> choice;

                        switch (choice)
                        {
                        case 1:
                            cout << "You used " << bat.getMove1P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= attk;
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Choose another one!" << endl;

                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 2:
                            cout << "You used " << bat.getMove2P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 3:
                            cout << "You used " << bat.getMove3P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 4:
                            cout << "You used " << bat.getMove4P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please choose a move between 1 and 4." << endl;
                            break;
                        }
                    }
                }


            }
            else
            {
                cout << "Pokemon not found. Please enter a valid pokemon name." << endl;
            }
        }
}   }
