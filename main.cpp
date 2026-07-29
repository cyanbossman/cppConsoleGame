#include<iostream>
#include<array>
#include<vector>
#include "UmbrellaHeader.h"
#include "Inventory.h"
#include "GameEntry.h"

int main() {
	Player player;
	initializePlayer(player);
	GameEntry(player);

	return 0;
}
