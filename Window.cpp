#include "Window.h"
using namespace std;

Window::Window(string material) {
	this->name = "���� ������� �� ������ " + material;
}

void Window::setName(string name) {
	this->name = name;
}

string Window::ToString() {
	return this->name;
}

