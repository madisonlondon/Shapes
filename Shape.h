#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <string>
using namespace std;

class Shape
{
  protected:
        string name;

    public:
    	// Constructor that takes a name
        Shape(string shapeName);
        // Destructor
        ~Shape();

        // Returns the area of the shape
        double getArea();

        // Prints the name and area of the shape
        void print();
        
        //virtual void print();      // for later testing
        
        // virtual void print() = 0;  // for later testing
};

#endif
