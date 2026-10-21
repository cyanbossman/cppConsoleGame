#pragma once

#include<iostream>
#include "LootFactory.h"
#include "Room.h"
#include "SelectRandomRoom.h"
#include "Item.h"
#include "ItemData.h"
#include "Player.h"
#include "Inventory.h"

void GenerateLootTest(Player &player);

void grabItem(Room& room, Player& player);

void printInv(Player& player, Room& room);