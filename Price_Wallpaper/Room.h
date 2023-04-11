#pragma once
#include<string>
#include"Wallpaper.h"
using namespace std;
class Room
{
private:
	float x;//ширина
	float y;//высота
	float z;//длинна
	bool roof;
	string name;
	Wallpaper paper;

public:
	Room() {
		this->x = 3;
		this->z = 3;
		this->y = 2.5;
		this->name = "room";
		this->roof = false;
	}
	Room(float x, float y, float z, string name, Wallpaper paper, bool roof) {
		this->x = x;
		this->z = z;
		this->y = y;
		this->name = name;
		this->paper = paper;
		this->roof = roof;
	}

	float getPrice();
	float getSqare();

};

