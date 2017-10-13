//homework 5.2
//puzzle jump
//return true of the puzzle can be solved
/*
The idea is that the result of solve puzzle for array1 is equal to
solve array2 starting at array1[start] or array1[start-array[start]]
if exists
*/

#include<iostream>
#include<iomanip>
using namespace std;

bool solve_puzzle(int array[],int start);
int size (int array[]);

int main(){
	int start;
	int length;
	//initialize the length of the array
	cout << "Please enter the length of the array:"<<endl;
	cin >>length;
	while(length<1){
		cout << "The length of the array should be a positive integer. Please enter the length of the array:"<<endl;
		cin >>length;
	}

	//initialize the array
	int array[length];
	cout << "Please enter the array of positive integers and end with 0"<<endl;	
	for (int i =0;i<length;i++)
		cin >> array[i];

	start = array[0];

	//print the puzzle
	cout << "The puzzle entered is:"<<endl;
	cout << "Start: ";
	for (int i = 0;i<length;i++)
		cout << array[i]<<setw(5);
	cout <<endl;

	//print whether the puzzle can be solved
	if (solve_puzzle(array,start))
		cout << "The puzzle can be solved."<<endl;
	else 
		cout << "The puzzle can not be solved."<<endl;
		
	return 0;
}

bool solve_puzzle(int array[],int start){
	if(array[start]==0)
		return true;
	if (array[start] == -1)
		return false;
	if (array[start]<start){
		int step = array[start];
		array[start]=-1;
		if (array[start]<size(array))
			return (solve_puzzle(array+start,*(array+start)) || solve_puzzle(array+start-step,*(array+start-step)));
		else return solve_puzzle(array+start-step,*(array+start-step));
	}

	if (array[start]>=start){
		int step = array[start];
                array[start]=-1;
                if (array[start]<size(array))
                        return solve_puzzle(array+start,*(array+start));
		else return false;
	}


}

int size (int * array){
	int i;	
	for (i =0; *(array+i)!=0;i++)
	return i+1;

}
