//class file for class Sphere

#include<iostream>
using namespace std;
#include "Sphere.h"

Sphere:: Sphere(double xValue, double yValue,double zValue, double radiusValue)
	:ThreeDimensionalShape(xValue,yValue,zValue)
{
	setRadius(radiusValue);
}

void Sphere::setRadius (double radiusValue){
	radius = (radiusValue<0.0?0.0:radiusValue);
}

void Sphere::print() const{
	cout << "The sphere with radius " << radius;
	cout << " that is located at ";
	ThreeDimensionalShape::print();
	cout <<" has:"<<endl;
	cout << "Surface of "<< getArea()<<endl;
	cout << "Volume of " << getVolume() <<endl;
}

double Sphere::getArea() const{
	return (4*3.14159*radius*radius);
}

double Sphere::getVolume() const{
	return (4.0/3 * 3.14159* radius*radius*radius);
}
