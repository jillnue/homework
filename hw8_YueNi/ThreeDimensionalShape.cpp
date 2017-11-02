//class file for class TwoDimensionalShape

#include<iostream>
using namespace std;

#include "ThreeDimensionalShape.h"

ThreeDimensionalShape::ThreeDimensionalShape(double xValue, double yValue, double zValue)
	:x(xValue),y(yValue),z(zValue)
{
	//empty body
}

void ThreeDimensionalShape::setX(double xValue){
	x = xValue;
}
double ThreeDimensionalShape::getX() const{
	return x;
}
void ThreeDimensionalShape::setY(double yValue){
	y=yValue;
}
double ThreeDimensionalShape::getY() const{
	return y;
}
void ThreeDimensionalShape::setZ(double zValue){
	z= zValue;
}
double ThreeDimensionalShape::getZ() const{
	return z;
}
void ThreeDimensionalShape::print() const{
	cout << '('<<getX()<<", "<<getY()<<", "<<getZ()<<')';
}
