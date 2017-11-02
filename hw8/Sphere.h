//header file for class Sphere



#include<iostream>
using namespace std;
#ifndef SPHERE_H
#define SPHERE_H

#include "ThreeDimensionalShape.h"


class Sphere : public ThreeDimensionalShape {
	public:
		Sphere (double =0.0, double = 0.0, double = 0.0, double = 0.0);
		void setRadius(double);
		double getRadius() const;

		virtual void print() const;
		virtual double getArea() const;
		virtual double getVolume() const;

	private:
		double radius;
};

#endif
