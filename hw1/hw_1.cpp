//Name: Yue Ni
//Course: 16:332:503, Programming Finance
//Fine the max and min of 5 numbers given by the user

#include<iostream>
using namespace std;

int main(){
	int n1,n2,n3,n4,n5; //The 5 numbers defined by the user
	int max, min; //variables to install the max, min value
	cout<<"Please enter 5 numbers"<<endl;
	cin >>n1>>n2>>n3>>n4>>n5;
	if (n1 > n2)
		max = n1, min = n2;
	else
		max = n2, min = n1;

	if (n3>max)
		max = n3;
	else if (n3 <min)
		min = n3;

	if (n4 >max)
		max = n4;
	else if (n4<min)
		min = n4;

	if (n5>max)
		max = n5;
	else if (n5<min)
		min = n5;
	
	cout <<"The maximum is "<< max <<", and the minimum is "
	<< min << ".\n";

	return 0;
}
