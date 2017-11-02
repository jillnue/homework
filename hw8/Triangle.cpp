//class file for class Triangle

#include<iostream>
using namespace std;
#include "Triangle.h"

Triangle:: Triangle(double xValue, double yValue, double edgeValue)
	:TwoDimensionalShape(xValue,yValue)
{
	setEdge(edgeValue);
}

void Triangle::setEdge (double edgeValue){
	edge = (edgeValue<0.0?0.0:edgeValue);
}

void Triangle::print() const{
	cout << "The triangle with equal laterals " <<edge;
	cout << " that is located at ";
	TwoDimensionalShape::print();
	cout <<" has:"<<endl;
	cout << "An area of "<< getArea();
}

double Triangle::getArea() const{
	return (1.732050/4 * edge * edge);
}
