#include "Wall.h"

Wall::Wall(string material) {
	this->name = "����� ������� �� " + material;
}

void Wall::setName(string name) {
	this->name = name;
}

string Wall::ToString() {
	return this->name;
}
