#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Shape.h"

class Circle : public Shape
{
	private:
		double radius;
	protected:
		 const long double PI = 3.141592653589793238L;
	public: 
		// Constructor that assigns a value to the circle's name and radius 
		Circle(string name, double circleRadius);
		// Destructor
		~Circle();

		// Returns the area of the circle
		double getArea();

		// Prints the circle's name and radius
		void print();
};

#endif
