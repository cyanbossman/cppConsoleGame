#include<iostream>
#include<array>
#include<vector>
#include "UmbrellaHeader.h"

int main() {
	Player player;
	initializePlayer(player);

	return 0;
}

//const struct Stats {
//	int hp;
//	int atk;
//	int def;
//};
//
//struct PlayerClass{
//	const char* name;
//	Stats Stats;
//};
//
//constexpr std::array<PlayerClass, 3> Classes{
//	PlayerClass{"Knight", {150, 20, 50}},
//	PlayerClass{"Mage", {100, 35, 0}},
//	PlayerClass{"Assassin", {70, 50, 10}}
//};
//
//class Player {
//public:
//	std::string Name{};
//	Stats stats{};
//	PlayerClass playerclass{};
//
//	void CalculateStats(PlayerClass& playerclass) {
//		//Logic for gear modifiers planned
//		stats = playerclass.Stats;
//	};
//};
//
//static void initializePlayer(Player& player) {
//	
//	Stats BaseStats{};
//	int ClassChoice{};
//	std::string Name{};
//	
//	std::cout << "What is your name?\n";
//	std::cin >> Name;
//
//	while (true) {
//
//		std::cout << "Which class do you want to play as?\n";
//		for (int i = 0; i < Classes.size(); i++) {
//			std::cout << i + 1 << ". " << Classes[i].name << "\n";
//		};
//
//		if (!(std::cin >> ClassChoice)) {
//			input::ClearBadInput();
//			continue;
//		}
//		if (ClassChoice < 1 || ClassChoice > Classes.size()) {
//			input::ClearBadInput();
//			
//			continue;
//		}
//		else
//			break;
//	};
//
//	ClassChoice -= 1;
//	player.playerclass = Classes[ClassChoice];
//	BaseStats = Classes[ClassChoice].Stats;
//	std::cout << "You have chosen to play as '" << player.playerclass.name <<"', " << Name;
//};

