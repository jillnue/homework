//header file for class Triangle



#include<iostream>
using namespace std;
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "TwoDimensionalShape.h"


class Triangle : public TwoDimensionalShape {
	public:
		Triangle (double =0.0, double = 0.0, double = 0.0);
		void setEdge(double);
		double getEdge() const;

		virtual void print() const;
		virtual double getArea() const;

	private:
		double edge;
};

#endif
