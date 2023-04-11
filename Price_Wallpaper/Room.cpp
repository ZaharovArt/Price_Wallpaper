#include "Room.h"

float Room::getPrice()
{
	if (roof = false) {
		float sqare = (this->x + this->z) * 2 * this->y;
		float howPaper = sqare / paper.getSqare();
		return howPaper * paper.getPrice();
	}
	else {
		float sqare = (this->x + this->z) * 2 * this->y;
		float sqareRoof = this->x * this->z;
		float howPaper = sqare / paper.getSqare();
		float howParerRoof = sqareRoof / paper.getSqare();
		return (howPaper * paper.getPrice()+howParerRoof*paper.getSqare());
	}
}

float Room::getSqare()
{
	return (this->x + this->z) * 2 * this->y;
}
