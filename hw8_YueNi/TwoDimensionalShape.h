//header file for class TwoDimensionalShape

#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "shape.h"

class TwoDimensionalShape : public Shape {
	public:
		TwoDimensionalShape(double=0.0, double=0.0); //default constructor
		void setX(double);
		double getX() const;
		
		void setY(double);
		double getY() const;

		virtual void print() const;
	private:
		double x;
		double y;
};

#endif
