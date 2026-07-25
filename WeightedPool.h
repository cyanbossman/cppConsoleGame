#pragma once
#include<vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <stdexcept>

template<typename T>
struct Entry {
	T object;
	int weight;
};

template<typename T>
class WeightedPool {
public:
	void add(const T& object, int weight) {
		entries.push_back({ object, weight });
	};
	const T& roll() const {

		int TotalWeight = 0;
		for (auto& e : entries) TotalWeight += e.weight;
			static std::mt19937 rng{ std::random_device{}() };
			std::uniform_int_distribution<int> dist(1, TotalWeight);
			int roll = dist(rng);

			int cumulative = 0;
			for (auto& e : entries) {
				cumulative += e.weight;
				if (roll <= cumulative) {
					return e.object;
				};
			};
		return entries.back().object;
	};


private:
	std::vector<Entry<T>> entries;

};

