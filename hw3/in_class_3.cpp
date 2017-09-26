//20 students poll 5 candidates to be the next apprentice
//in_class assignment 3
//16:332:503:01
//Yue Ni


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int vote[5] = {0,0,0,0,0};
	for (int i =1;i<=20;i++)
	{
		cout <<"Number 1 to 5 stands for the first to the fifth candidate respectively."<<endl;
		cout <<"Please enter a number from 1 to 5: "<<endl;
		bool unsure = true;//variable that will be false once the students make sure that he has voted the right candidate.
		int vote_number =0;
		while (unsure)
		{
			cin >> vote_number;
			//if the number enter is not from 1 to 5, let the student to enter again
			while (vote_number !=1 && vote_number !=2 && vote_number !=3 && vote_number !=4 && vote_number !=5)
			{
				cout <<"The number you entered is out of range. Please enter a number from 1 to 5"<<endl;
				cin >> vote_number;
	
			}
			char answer = 'N';//The answer by the students whether they are sure they want to vote for the candidate
			cout << "Are you sure you want to vote for candidate number "<< vote_number<<"? Press Y for yes or N for No."<<endl;
			bool Y_N = true;
			while (Y_N)
			{
			cin >> answer;
			if (answer == 'Y' || answer =='N')
				Y_N = false;
			else
				cout<<"Please press Y for yes or N for no."<<endl;
			}
			if (answer == 'Y')
				unsure = false;
			if (answer == 'N')
				cout << "Please enter an another number from 1 to 5:" <<endl;

		}
		vote[vote_number-1]++;
		cout << "The vote has been successfully recorded."<<endl;
		
	}
	//Print out the general result
	cout << "The result of the vote is as follows: "<<endl;
	cout << "candidate number" << setw(30) << "number of votes received"<<endl;
	for (int j =1;j<=5;j++)
		cout << j << setw(30) << vote[j-1]<<endl;


	
	//Find out who has the most votes	
	int max_index = 0;
	for (int j =1;j<5; j++)
	{
		if (vote[j]>vote[max_index])
			max_index = j;
	} 
	//Check if there is another candidate who has the same number of votes as candidate max_index+1
	bool one_max = true;
	for (int j =max_index+1;j<5;j++){

		if (vote[j]>=vote[max_index])
			{one_max = false;break;}


	} 

	if (one_max == true)
		cout << "The winner is candidate " << max_index+1<<"."<<endl;
	else
		cout <<"There is no winner."<<endl;


	return 0;
}
