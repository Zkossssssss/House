#include "House.h"

House::House() {}

House* House::setHouseType(HouseType houseType) {
	this->houseType = houseType;
	switch (houseType) {
	case HouseType::WOOD: this->name = "Мой деревянный дом"; break;
	case HouseType::GINGERBREAD: this->name = "Мой рождественский пряничный домик"; break;
	case HouseType::STONE: this->name = "Мой каменный дом"; break;
	}
	return this;
}

House* House::addRoof(Roof* roof) {
	this->roof = roof;
	return this;
}

House* House::addWall(Wall* wall) {
	this->walls.push_back(wall);
	return this;
}

House* House::addWindow(Window* window) {
	this->windows.push_back(window);
	return this;
}

void House::setName(string name) {
	this->name = name;
}

string House::ToString() {
	string display = "";
	display += "---- " + this->name + " ----\n";

	for (Wall* wall : walls) {
		display += "---- " + wall->name + " ----\n";
	}
	for (Window* window : windows) {
		display += "---- " + window->name + " ----\n";
	}
	display += "---- " + roof->name + " ----\n";
	return display;
}
