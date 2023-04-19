#include "InteriorWall.h"

InteriorWall::InteriorWall(string material) : Wall(material) {
	this->name = "Стена интерьера сделана из " + material;
}
