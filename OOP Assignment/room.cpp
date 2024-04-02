#include "room.h"

#include<string>

Room::Room() {}
Room::Room(std::string roomNumber) : roomNumber(roomNumber) {}

std::string Room::getRoomNumber() const {
	return roomNumber;
}