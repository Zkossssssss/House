#pragma once
#include <iostream>
#include "House.h"
#include "HouseType.h"

class HouseBuilder 
{
private:
	HouseType houseType;
protected:
	string builderName;
	House* house;
public:
	void setHouseType(HouseType houseType);
	virtual HouseBuilder* addWalls() = 0;
	virtual HouseBuilder* addRoof() = 0;
	virtual HouseBuilder* addWindows() = 0;
	virtual House* build();
};

