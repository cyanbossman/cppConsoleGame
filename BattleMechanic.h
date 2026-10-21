#pragma once
#include "GameControl.h"
#include "Player.h"
#include "Enemy.h"
#include "Item.h"

//   - outdated comment:
//Battle mechanic should pull a random enemy from room pool.
//Stats should be calculated once at the start of combat.
//HP should have a max-hp and current-hp. Max-hp is only for displaying and to limit max-hp.
//Stats are a calculation of base stats and gear modifiers.
//Damage calculations should be the aggregated stats + skill modifier, if any.


void runBattle(Player& player, Enemy& enemy);
