#include "Roof.h"
Roof::Roof(string material) {
	this->name = "����� ������� �� " + material;
}

void Roof::setName(string name) {
	this->name = name;
}

string Roof::ToString() {
	return this->name;
}
