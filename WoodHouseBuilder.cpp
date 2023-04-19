#include "WoodHouseBuilder.h"
#include "InteriorWall.h"

WoodHouseBuilder::WoodHouseBuilder() {
	this->builderName = "��������� ����������� �����";
	setHouseType(HouseType::WOOD);
}

HouseBuilder* WoodHouseBuilder::addWalls() {
	//���������
	for (int i = 0; i < 4; i++) {
		cout << "���������� ����� � ����� �� " << wallMaterial << endl;
		house->addWall(new Wall(wallMaterial));
	}
	cout << "-----------" << endl;
	//��������
	for (int i = 0; i < numWalls - 4; i++) {
		cout << "���������� ����� � ����� �� " << interiorWallMaterial << endl;
		house->addWall(new InteriorWall(interiorWallMaterial));
	}
	cout << "-----------" << endl;
	return this;
}

HouseBuilder* WoodHouseBuilder::addWindows() {
	for (int i = 0; i < numWindows; i++) {
		cout << "������� ���� �� " + windowMaterial << endl;
		house->addWindow(new Window(windowMaterial));
	}
	return this;
}

HouseBuilder* WoodHouseBuilder::addRoof() {
	house->addRoof(new Roof(RoofMaterial));
	return this;
}

House* WoodHouseBuilder::build() {
	cout << "���������" << endl;
	return house;
}