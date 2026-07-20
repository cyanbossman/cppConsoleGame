#pragma once
#include<iostream>
#include<array>

const struct Stats {
	int hp;
	int atk;
	int def;
};

struct PlayerClass {
	const char* name;
	Stats stats;
};

extern const std::array<PlayerClass, 3> Classes;

class Player {
public:
	std::string Name{};
	Stats stats{};
	PlayerClass playerclass{};

	void CalculateStats(PlayerClass& playerclass);
};