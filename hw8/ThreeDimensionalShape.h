//header file for class TwoDimensionalShape

#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H

#include "shape.h"

class ThreeDimensionalShape : public Shape {
	public:
		ThreeDimensionalShape(double=0.0, double=0.0, double =0.0); //default constructor
		void setX(double);
		double getX() const;
		
		void setY(double);
		double getY() const;

		void setZ(double);
		double getZ() const;

		virtual void print() const;
	private:
		double x;
		double y;
		double z;
};

#endif
