#pragma once
#include <iostream>
#include "HouseType.h"
#include "House.h"
#include "HouseBuilder.h"
using namespace std;

class WoodHouseBuilder : public HouseBuilder 
{
private:
	int numWalls = 6;
	int numWindows = 10;
	string windowMaterial = "���������� ������";
	string wallMaterial = "������ 4�6";
	string interiorWallMaterial = "������ 2�4";
	string RoofMaterial = "������";

public:
	WoodHouseBuilder();
	HouseBuilder* addWalls();
	HouseBuilder* addWindows();
	HouseBuilder* addRoof();
	House* build();


};

