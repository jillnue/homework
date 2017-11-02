//Main_YueNi.cpp
//Test out polynomial class

#include<iostream>
using namespace std;

#include "Polynomial_YueNi.h"

int main(){
	Polynomial poly1, poly2;
	poly1.setPoly();
	cout  <<endl;
	poly2.setPoly();
	cout <<endl;

	cout << "First Polynomial is: " << poly1<<endl;
	cout << "Second Polynomial is: " << poly2<<endl;
	cout <<endl;

	cout << "Adding polynomial yields: " << poly1+poly2<<endl;
	Polynomial copy = poly1;
	copy+=poly2;
	cout << "+= the polynomial yields:"<<copy<<endl;
	cout << endl;

	cout << "Subracting the polynomial yields: " << poly1-poly2<<endl;
	copy = poly1;
	copy-=poly2;
	cout << "-= the polynomial yields:"<<copy<<endl;
	cout <<endl;

	cout << "Multiplying the polynomials yields: " << poly1*poly2<<endl;
	copy = poly1;
	copy *=poly2;
	cout << "*= the polynomial yields: " << copy<<endl;

	return 0;
}
