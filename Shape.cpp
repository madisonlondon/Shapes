#ifndef __SHAPE_CPP__
#define __SHAPE_CPP__

#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape(string shapeName)
{
    // Constructor that takes a name
	name = shapeName;
}

Shape::~Shape()
{
	// Destructor
}

double Shape::getArea()
{
	// Returns the area of the shape
	return 0.0;
}

void Shape::print()
{
	// Prints the name and area of the shape
	cout << "Shape name: " << name << endl;
	cout << "Area: " << getArea() << endl;
}

#endif
