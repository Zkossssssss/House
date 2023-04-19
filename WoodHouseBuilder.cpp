#include "WoodHouseBuilder.h"
#include "InteriorWall.h"

WoodHouseBuilder::WoodHouseBuilder() {
	this->builderName = "Строитель деревняяных домов";
	setHouseType(HouseType::WOOD);
}

HouseBuilder* WoodHouseBuilder::addWalls() {
	//экстерьер
	for (int i = 0; i < 4; i++) {
		cout << "Прибивание досок к стене из " << wallMaterial << endl;
		house->addWall(new Wall(wallMaterial));
	}
	cout << "-----------" << endl;
	//интерьер
	for (int i = 0; i < numWalls - 4; i++) {
		cout << "Прибивание досок к стене из " << interiorWallMaterial << endl;
		house->addWall(new InteriorWall(interiorWallMaterial));
	}
	cout << "-----------" << endl;
	return this;
}

HouseBuilder* WoodHouseBuilder::addWindows() {
	for (int i = 0; i < numWindows; i++) {
		cout << "Вставка окон из " + windowMaterial << endl;
		house->addWindow(new Window(windowMaterial));
	}
	return this;
}

HouseBuilder* WoodHouseBuilder::addRoof() {
	house->addRoof(new Roof(RoofMaterial));
	return this;
}

House* WoodHouseBuilder::build() {
	cout << "Сколотить" << endl;
	return house;
}