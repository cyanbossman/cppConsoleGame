#pragma once

#include "Player.h"
#include "BattleMechanic.h"
#include "Item.h"
#include "Enemy.h"

void GameLoop(Player& player);
void runBattle(Player& player, Enemy& enemy);