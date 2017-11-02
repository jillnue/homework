//class file for class TwoDimensionalShape

#include<iostream>
using namespace std;

#include "TwoDimensionalShape.h"

TwoDimensionalShape::TwoDimensionalShape(double xValue, double yValue)
	:x(xValue),y(yValue)
{
	//empty body
}

void TwoDimensionalShape::setX(double xValue){
	x = xValue;
}
double TwoDimensionalShape::getX() const{
	return x;
}
void TwoDimensionalShape::setY(double yValue){
	y=yValue;
}
double TwoDimensionalShape::getY() const{
	return y;
}
void TwoDimensionalShape::print() const{
	cout << '('<<getX()<<", "<<getY()<<')';
}
