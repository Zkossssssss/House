#pragma once
#include <iostream>
using namespace std;
class Roof {
public:
	string name;
	Roof(string material);
	void setName(string name);
	string ToString();
private:
	string material;
};
