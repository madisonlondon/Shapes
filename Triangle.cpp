#include <iostream>
#include "Triangle.h"
#include "Shape.h"
using namespace std;

// Constructor for Triangle. Takes a string representing the
// name of the triangle and two doubles representing the 
// base and height of the triangle as parameters
Triangle::Triangle(string name, double base, double height) : Shape(name)
{
	triangleBase = base;
	triangleHeight = height;
}

// Prints name, base, height, and area of triangle object
void Triangle::print()
{
  cout << "Name of triangle: " << name << endl;
  cout << "Base of triangle: " << triangleBase << endl;
  cout << "Height of triangle: " << triangleHeight << endl;
  cout << "Area of triangle: " << getArea() << endl;
}

// Calculates area of triangle 
double Triangle::getArea()
{
  return 0.5*triangleBase*triangleHeight;
}

// Destructor for Triangle
Triangle::~Triangle()
{}