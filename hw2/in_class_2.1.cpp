//Name: Yue Ni
//Course: 16:332:503, Programming Finance
//print out triangular shape

#include<iostream>
using namespace std;

int main(){
	int line_nu;
	cout<<"Please enter how many lines you want in the shape:";
	cin >>line_nu;
	
	for (int i = 1; i <=line_nu; i++){
		for (int j = 1;j<=i;j++)
			cout <<"*";
		cout<<endl;
	}
	return 0;
}
