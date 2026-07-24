#include "SelectRandomRoom.h"

RoomData SelectRandomRoom() {
	
	WeightedPool<RoomData> pool;
	for (const auto& room: rooms) {
		pool.add(room, room.RoomWeight);
	}
	return pool.roll();
}