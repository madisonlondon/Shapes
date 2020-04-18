#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__
#include <iostream>
#include "Shape.h"
using namespace std;

class Triangle : public Shape
{
	// private instance variables for Triangle
  private:
    double triangleBase;
    double triangleHeight;
    // Methods and constructors for Triangle
  public:
    Triangle(string name, double base, double height);
    ~Triangle();
    void print();
    double getArea();

};
#endif