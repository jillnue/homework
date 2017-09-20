//Name: Yue Ni
//Course: 16:332:503, Programming Finance
//print out diamond shape

#include<iostream>
using namespace std;

int main(){
	int line_nu;
	cout<<"Please enter the maximum number of stars in each line:";
	cin >>line_nu;
	if (line_nu %2 ==0){
		cout << "The number of stars should be odd. Please enter another number: ";
		cin >> line_nu;
	}
	
	int mid_nu = (line_nu+1)/2;//This number is the middle position of the number the user just entered
	int j = mid_nu;	
	for (int i = 1; i <=mid_nu; i++){
		j--;
		for (int k =1;k<=j;k++)
			cout<<" ";
		for (int k =1;k<=2*i-1;k++)
			cout <<"*";
		cout<<endl;
	}//This for loop print the upper part of the diamond
	
	for (int i =1; i< mid_nu;i++){
		for(int j =1; j<=i;j++)
			cout << " ";
		for (int j =1; j <= line_nu - 2*i;j++)
			cout <<"*";
		cout<<endl;
	}//This for loop print the lower part of the diamond
	return 0;
}
