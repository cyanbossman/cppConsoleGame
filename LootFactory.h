#pragma once

#include <vector>
#include <memory>
#include "Item.h"


//Can skip the SelectRandom design as i only need to roll a random instance from ItemData and return as unique

std::unique_ptr<Item> CreateLoot(const std::vector<Item>& items);
