#include <iostream>
#include "Rectangle.h"
#include "Shape.h"
using namespace std;

//Takes in a name, a width value and a height value
Rectangle::Rectangle(string name, double width, double height) : Shape(name)
{
  	rWidth = width;
	rHeight = height;
}

Rectangle::~Rectangle() {}

double Rectangle::getArea()
{
	return rWidth * rHeight;;
}

void Rectangle::print()
{
	cout << "Name: " << name << endl;
  	cout << "Area: " << getArea() << endl;
	cout << "Width: " << rWidth << endl;
	cout << "Height: " << rHeight << endl;

}
