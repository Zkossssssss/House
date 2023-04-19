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
	string windowMaterial = "Закаленное стекло";
	string wallMaterial = "Дерево 4х6";
	string interiorWallMaterial = "Дерево 2х4";
	string RoofMaterial = "Металл";

public:
	WoodHouseBuilder();
	HouseBuilder* addWalls();
	HouseBuilder* addWindows();
	HouseBuilder* addRoof();
	House* build();


};

