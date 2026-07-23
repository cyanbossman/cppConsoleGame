#pragma once

#include "EnemyType.h"
#include "Enemy.h"

namespace EnemyFactory {
	Enemy create(EnemyType type);
}