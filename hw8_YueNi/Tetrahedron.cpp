//class file for class Tetrahedron

#include<iostream>
using namespace std;
#include "Tetrahedron.h"

Tetrahedron:: Tetrahedron(double xValue, double yValue,double zValue, double edgeValue)
	:ThreeDimensionalShape(xValue,yValue,zValue)
{
	setEdge(edgeValue);
}

void Tetrahedron::setEdge (double edgeValue){
	edge = (edgeValue<0.0?0.0:edgeValue);
}

void Tetrahedron::print() const{
	cout << "The tetrahedron with edge " << edge;
	cout << " that is located at ";
	ThreeDimensionalShape::print();
	cout <<" has:"<<endl;
	cout << "Surface area of "<< getArea()<<endl;
	cout << "Volume of " << getVolume()<<endl;
}

double Tetrahedron::getArea() const{
	return (1.73205 *edge *edge);
}

double Tetrahedron::getVolume() const{
	return ( edge *edge*edge/6.0/1.41421);
}
