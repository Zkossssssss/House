#include "HouseBuilder.h"

void HouseBuilder::setHouseType(HouseType houseType)
{
	house = new House();
	this->houseType = houseType;
	house->setHouseType(houseType);
}

House* HouseBuilder::build()
{
	cout << "������!" << endl;
	return house;
}
