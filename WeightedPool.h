	#pragma once
	#include<vector>


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
			//Need logic finished, for concept:
			//Could iterate again and find the first time previous object weights + this 
			//index weight is < rolled number and then index -1???
			// 
			//for (size_t i = 0; i < entries.size; i++) {
			//	int TotalWeight;
			//	TotalWeight += entries[i].weight;
			//}
				
			return entries.front().object;
		};


	private:
		std::vector<Entry<T>> entries;

	};

