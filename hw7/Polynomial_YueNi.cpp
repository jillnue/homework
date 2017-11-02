//Polynomial.cpp
//Member-function definitions for class Polynomial

#include<iostream>
using namespace std;

#include "Polynomial_YueNi.h"

//constructor
Polynomial::Polynomial()
{
	for (int i =0;i<13;i++){
		coefficient[i]=0;
	}
}//end constructor

void Polynomial::setPoly()
{
	int num_of_term;
	cout <<"Enter the number of polynomial term:"<<endl;
	cin >> num_of_term;
	if (num_of_term >0 && num_of_term <8){
		for (int i=0;i<num_of_term;i++){
			float enter_coeff;
			int exponent;
			cout<<"Enter coefficient and exponent:"<<endl;
			cin >> enter_coeff;
			cin >> exponent;
			if (exponent>=0 && exponent <7){
				coefficient[exponent]=enter_coeff;
			}
			else {
			cout <<"The exponent you entered is out of bond"<<endl;
			break;
			}
		}
	}
	else cout <<"The number you enter is out of bound"<<endl;
}

void Polynomial::getPoly() const
{
	bool constant = true;
	bool ahead = false;
	for (int i=12;i>1;i--){
		if (coefficient[i] !=0){
			if (ahead) cout <<" + ";
			cout<<coefficient[i]<<"x^"<<i;
			constant = false;
			ahead = true;
		}
		else continue;
	}
	if (coefficient[1] !=0){
		if (ahead) cout << " + ";
		cout << coefficient[1]<<"x";
		constant = false;
	}
	if (coefficient[0] !=0){
		if (ahead) cout <<" + ";
		cout <<coefficient[0];
	}
	if (coefficient[0]==0 && constant==true)
		cout << coefficient[0];
	cout <<endl;
}

ostream &operator<<(ostream &output, const Polynomial &poly){
	bool ahead = false;
	bool constant = true;
	for (int i=1;i<13;i++){
		if (poly.coefficient[i]!=0)
			constant = false;
	}

        if (poly.coefficient[0] !=0){
                output <<poly.coefficient[0];
		ahead = true;
        }
        if (poly.coefficient[0]==0 && constant==true)
                output << poly.coefficient[0];

	if (poly.coefficient[1] !=0){
                if (ahead) output <<" + ";
                output << poly.coefficient[1]<<"x";
                ahead = true;
        }

        for (int i=2;i<13;i++){
                if (poly.coefficient[i] !=0){
                        if (ahead) output << " + ";
                        output<<poly.coefficient[i]<<"x^"<<i;
                        ahead = true;
                }
                else continue;
        }
	return output;
}


Polynomial Polynomial::operator+(Polynomial &poly1){
	Polynomial poly;
	for (int i=0;i<13;i++){	
		poly.coefficient[i]=coefficient[i]+poly1.coefficient[i];
	}
	return poly;
}

Polynomial Polynomial::operator-(Polynomial &poly1){
        Polynomial poly;
        for (int i=0;i<13;i++){
                poly.coefficient[i]=coefficient[i]-poly1.coefficient[i];
        }
        return poly;
}

Polynomial Polynomial::operator*(Polynomial &poly1){
        Polynomial poly;
        for (int i=0;i<7;i++){
		for (int j =0; j<7;j++){
                poly.coefficient[i+j]+=coefficient[i]*poly1.coefficient[j];
		}
        }
        return poly;
}


Polynomial & Polynomial::operator+=(Polynomial &poly1){
        for (int i=0;i<13;i++){
                coefficient[i]=coefficient[i]+poly1.coefficient[i];
        }
        return *this;
}

Polynomial & Polynomial::operator-=(Polynomial &poly1){
        for (int i=0;i<13;i++){
                coefficient[i]=coefficient[i]-poly1.coefficient[i];
        }
        return *this;
}

Polynomial & Polynomial::operator*=(Polynomial &poly1){
        Polynomial poly;
        for (int i=0;i<7;i++){
                for (int j =0; j<7;j++){
                poly.coefficient[i+j]+=coefficient[i]*poly1.coefficient[j];
                }
        }
	for (int i=0;i<13;i++){
		coefficient[i]=poly.coefficient[i];
	}
        return *this;
}



