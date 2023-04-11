#include "Wallpaper.h"

 Wallpaper::Wallpaper() {
	this->width = 1.06;
	this->heidht = 10;
	this->price = 1000;
	this->name = "wallpaper";
}

 Wallpaper::Wallpaper(float width, float heidht, float price, string name) {
	this->width = width;
	this->heidht = heidht;
	this->price = price;
	this->name = name;
}

 float Wallpaper::getSqare() {
	float sqare = this->width * this->heidht;
	return sqare;
}
 float Wallpaper::getPrice() {
	return this->price;
}
