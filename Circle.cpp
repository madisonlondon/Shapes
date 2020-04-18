#ifndef __CIRCLE_CPP__
#define __CIRCLE_CPP__

#include <iostream>
#include "Circle.h"

Circle::Circle(string name, double circleRadius) : Shape(name)
{
	// Constructor that takes in a name and a radius value
	radius = circleRadius;
}

Circle::~Circle() 
{
	// Destructor
}

double Circle::getArea() 
{
	// Returns the area of the circle
	double area = PI * radius * radius;
	return area;
}


void Circle::print() 
{
	// Prints the circle's name and radius
	cout << name << endl;
	cout << radius << endl;
}

#endif
