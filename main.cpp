#include<iostream>
#include<array>
#include<vector>
#include "UmbrellaHeader.h"
#include "Inventory.h"
#include "GameEntry.h"
#include "RoomLootTest.h"

int main() {
	Player player;
	initializePlayer(player);
	//GameEntry(player);

	GenerateLootTest(player);
	return 0;
}
