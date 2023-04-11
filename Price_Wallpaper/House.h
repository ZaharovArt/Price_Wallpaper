#pragma once
#include"Room.h"
class House
{
private:
	int size;
	Room* room;

public:
	House();
	
	House(int roomSize, Room* arrayRoom) {
		this->size = roomSize;
		this->room = arrayRoom;
	}
	float getPrice();
};

