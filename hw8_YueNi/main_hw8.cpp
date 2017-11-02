//main.cpp file of homework 8
//display the choices and call the respective class functions

#include<iostream>
using namespace std;
#include"Circle.h"
#include"Triangle.h"
#include"Sphere.h"
#include"Tetrahedron.h"

int main(){
	bool user_continue = true;
	while (user_continue){
		cout << "Please choose a shape or 0 to exit:"<<endl;
		cout << "1. Circle"<<endl;
		cout << "2. Triangle"<<endl;
		cout << "3. Sphere"<<endl;
		cout << "4. Regular Tetrahedron"<<endl;
		cout << "0. Exit"<<endl; 
		int choice;
		cin >> choice;
		cout <<endl;
		switch(choice){
			case 1: {
				cout << "You have chosen the circle."<<endl;
				cout <<"\nPlease enter the center of the circle (x-coordinate and then y-coordinate):"<<endl;
				double x,y;
				cin >>x;
				cin >>y;
				cout <<"\nPlease enter the radius of the circle:"<<endl;
				double r;
				cin >>r;
				Circle circle(x,y,r);
				circle.print();
				cout <<endl;
				break;
				}
			case 2: {
                                cout << "You have chosen the triangle."<<endl;
                                cout <<"\nPlease enter the center of the triangle (x-coordinate and then y-coordinate):"<<endl;
                                double x,y;
                                cin >>x;
                                cin >>y;
                                cout <<"\nPlease enter the lateral of the triangle:"<<endl;
                                double l;
                                cin >>l;
                                Triangle triangle(x,y,l);
                                triangle.print();
				cout <<endl;
                                break;
                                }
			case 3:  {
                                cout << "You have chosen the sphere."<<endl;
                                cout <<"\nPlease enter the center of the sphere (x-coordinate, y-coordinate and then z-coordinate):"<<endl;
                                double x,y,z;
                                cin >>x;
                                cin >>y;
				cin >>z;
                                cout <<"\nPlease enter the radius of the sphere:"<<endl;
                                double r;
                                cin >>r;
                                Sphere sphere(x,y,z,r);
                                sphere.print();
                                cout <<endl;
                                break;
                                }
			case 4:  {
                                cout << "You have chosen the regular tetrahedron."<<endl;
                                cout <<"\nPlease enter the center of the regular tetrahedron (x-coordinate and then y-coordinate):"<<endl;
                                double x,y,z;
                                cin >>x;
                                cin >>y;
				cin >>z;
                                cout <<"\nPlease enter the edge of the regular tetrahedron:"<<endl;
                                double l;
                                cin >>l;
                                Tetrahedron tetrahedron(x,y,z,l);
                                tetrahedron.print();
                                cout <<endl;
                                break;
                                }
			case 0: user_continue = false;
				break;
			default : cout << "Please enter a number from 0 to 4."<<endl;
		}
	}
	return 0;
}
