#include "Wall.h"

Wall::Wall(string material) {
	this->name = "Стена сделана из " + material;
}

void Wall::setName(string name) {
	this->name = name;
}

string Wall::ToString() {
	return this->name;
}
