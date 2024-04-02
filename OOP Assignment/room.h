#pragma once

#include<string>

class Room {
private:
	std::string roomNumber;

public:
	Room();
	Room(std::string roomNumber);

	std::string getRoomNumber() const;
};