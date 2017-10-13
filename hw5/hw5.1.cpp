//homework 5.1
//recursive function takes a positive integer parameter
//first print the squares of the odd intgers in descending order
//then print the squares of the even integers in ascending order

#include<iostream>
using namespace std;

void recursive_print(int);

int main(){
	int n;
	cout <<"Please enter a positive intger:"<<endl;
	cin >> n;
	while (n<=0){
		cout <<"The integer should be positive."<<endl;
		cout <<" Please enter another integer:"<<endl;
		cin >> n;
	}
	cout << "The output is"<<endl;
	recursive_print(n);
	return 0;
}

void recursive_print(int n){
	if (n==1)
		cout << n;
	if (n%2==0){
		recursive_print(n-1);
		cout <<','<<n*n;
	}
	if (n%2!=0 && n!=1){
		cout <<n*n<<',';
		recursive_print(n-1);
	}	
}
