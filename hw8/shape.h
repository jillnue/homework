//header file for class Shape

#ifndef SHAPE_H
#define SHAPE_H

using namespace std;

class Shape{
	public:
		virtual double getArea() const;
		virtual double getVolume() const;

		virtual void print() const =0;

};

#endif
