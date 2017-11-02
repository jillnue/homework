//header file for class Tetrahedron



#include<iostream>
using namespace std;
#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "ThreeDimensionalShape.h"


class Tetrahedron : public ThreeDimensionalShape {
	public:
		Tetrahedron (double =0.0, double = 0.0, double = 0.0, double = 0.0);
		void setEdge(double);
		double getEdge() const;

		virtual void print() const;
		virtual double getArea() const;
		virtual double getVolume() const;

	private:
		double edge;
};

#endif
