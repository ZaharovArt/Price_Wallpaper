#pragma once
#include <string>
using namespace std;
class Wallpaper
{
private: 
	float width;
	float heidht;
	float price;
	string name;
public:
	Wallpaper();
	Wallpaper(float width, float heidht, float price, string name);
	float getSqare();
	float getPrice();
};


