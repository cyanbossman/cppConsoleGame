#include "LootFactory.h"
#include "WeightedPool.h"

std::unique_ptr<Item> CreateLoot(const std::vector<Item>& items)
{
    WeightedPool<Item> pool;
    for (const auto& item : items) {
        pool.add(item, item.getWeight());
    };
    return std::make_unique<Item>(pool.roll());
}