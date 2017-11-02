//Polynomial.h
//Header file that contains the class declaration

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include<iostream>
using std::ostream;

class Polynomial
{
friend ostream &operator<<(ostream &, const Polynomial&);

public:
Polynomial();//constructor
void setPoly();
void getPoly() const;
Polynomial operator+(Polynomial &);
Polynomial operator-(Polynomial &);
Polynomial operator*(Polynomial &);

Polynomial & operator+=(Polynomial &);
Polynomial & operator-=(Polynomial &);
Polynomial & operator*=(Polynomial &);





private:
float coefficient[13];
};

#endif 
