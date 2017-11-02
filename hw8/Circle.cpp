//class file for class Circle

#include<iostream>
using namespace std;
#include "Circle.h"

Circle:: Circle(double xValue, double yValue, double radiusValue)
	:TwoDimensionalShape(xValue,yValue)
{
	setRadius(radiusValue);
}

void Circle::setRadius (double radiusValue){
	radius = (radiusValue<0.0?0.0:radiusValue);
}

void Circle::print() const{
	cout << "The circle with radius " << radius;
	cout << " that is located at ";
	TwoDimensionalShape::print();
	cout <<" has:"<<endl;
	cout << "An area of "<< getArea();
}

double Circle::getArea() const{
	return (3.14159 * radius * radius);
}
