#pragma once
#include <iostream>
using namespace std;

class Window
{
public:
	string name;
	Window(string material);
	void setName(string name);
	string ToString();
private:
	string material;
};

