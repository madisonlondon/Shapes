#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#include <string>
#include "Shape.h"

using namespace std;

//Takes in a name, a width value and a height value
class Rectangle : public Shape {
	private:
		double rHeight;
		double rWidth;

	public:
		Rectangle(string name, double width, double height);
    double getArea();
		~Rectangle();

		void print();

};


#endif
