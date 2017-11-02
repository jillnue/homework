//header file for class Circle



#include<iostream>
using namespace std;
#ifndef CIRCLE_H
#define CIRCLE_H

#include "TwoDimensionalShape.h"


class Circle : public TwoDimensionalShape {
	public:
		Circle (double =0.0, double = 0.0, double = 0.0);
		void setRadius(double);
		double getRadius() const;

		virtual void print() const;
		virtual double getArea() const;

	private:
		double radius;
};

#endif
