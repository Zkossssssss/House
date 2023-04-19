#pragma once
#include <iostream>
#include <list>
#include "HouseType.h"
#include "Wall.h"
#include "Roof.h"
#include "Window.h"
using namespace std;

class House
{
private:
	string name;
	HouseType houseType;
	Roof* roof;
	list<Wall*> walls;
	list<Window*> windows;
public:
	House();
	House* setHouseType(HouseType houseType);
	House* addRoof(Roof* roof);
	House* addWall(Wall* wall);
	House* addWindow(Window* window);
	void setName(string name);
	string ToString();
};

