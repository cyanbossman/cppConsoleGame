#include "Room.h"

void RoomContainer::printContainer() {
	//return inventorySlots;
	//meh mby refactor to range based for loop like below
	for (std::size_t i = 0; i < room_containerSlots.size(); i++) {
		if (room_containerSlots[i]) {
			std::cout << i + 1 << ". " << room_containerSlots[i]->getName() << "\n";
			continue;
		};
		std::cout << i + 1 << ". Empty\n";
	};
};

bool RoomContainer::addItem(std::unique_ptr<Item>&& item) {
	for (auto& slot : room_containerSlots) {
		if (slot == nullptr) {
			slot = std::move(item);
			return true;
		}
	};
	return false;
};

std::unique_ptr<Item> RoomContainer::moveItem(std::size_t index) {

	if (index >= room_containerSlots.size() || room_containerSlots[index] == nullptr) {
		return nullptr;
	}
	return std::move(room_containerSlots[index]);
};