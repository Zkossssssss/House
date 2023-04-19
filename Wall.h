#pragma once
#include <iostream>
using namespace std;
class Wall
{
public:
	string name;
	Wall(string material);
	void setName(string name);
	string ToString();
private:
	string material;
};

