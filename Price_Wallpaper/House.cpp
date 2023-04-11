#include "House.h"

House::House()
{
		this->size = 3;
		this->room = new Room[3];
}

float House::getPrice()
{
	float priceHouse=0;
	for (int i = 0; i < this->size; i++) {
		priceHouse += room[i].getPrice();
	}
	return priceHouse;

}
