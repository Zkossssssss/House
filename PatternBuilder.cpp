#include <iostream>
#include "HouseBuilder.h"
#include "WoodHouseBuilder.h"
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	HouseBuilder* woodHouseBuilder = new WoodHouseBuilder();
	House* woodHouse = woodHouseBuilder->addWalls()->addWindows()->addRoof()->build();
	cout << woodHouse->ToString() << endl;
}