#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Shape s("Test Shape");
    cout << "----------------" << endl;
   	cout << "Shape tester:" << endl;
   	cout << "----------------" << endl;

    s.print();
    cout << " [Shape Name and Area]" << endl;

    cout << "----------------" << endl;
    cout << "Testing Circle.cpp" << endl;
    Circle c("Test Circle", 2.0);
    cout << "Testing getArea()" << endl;
    cout << "Expected output: 12.5664" << endl; 
    cout << "Actual output: " << c.getArea() << endl;
    cout << "Testing print()" << endl;
    cout << "Expected output: " << endl; 
    cout << "Test Circle" << endl; 
    cout << "2" << endl;
    cout << "Acutal output: " << endl;
    c.print();
    cout << "----------------" << endl;


   	cout << "Rectangle tester:" << endl;
   	cout << "----------------" << endl;

   	Rectangle r("A Rectangle", 1.1, 2.2);
   	r.print();
   	cout << "[A Rectangle], [2.42], [1.1], [2.2]" << endl;

    cout << "----------------" << endl;
    cout << "Triangle tester:" << endl;
    cout << "----------------" << endl;

    Triangle tri("Triangle 1", 1.5, 4.2);
    cout << "Expected Results:" << endl;
    cout << "Name of triangle: Triangle 1" << endl;
    cout << "Base of triangke: 1.5" << endl;
    cout << "Height of triangle: 4.2" << endl;
    cout << "Area of triangle: 3.15" << endl;
    cout << "Actual Results:" << endl;
    tri.print();

    return 0;
}
