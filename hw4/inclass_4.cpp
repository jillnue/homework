//in class homework 4
//find the number of times that a character c appears in a string s
//using recursive function



#include<iostream>
using namespace std;

int find_occur_times(char*,char);

int main()
{
	char s[100];// I set the max character input to be 100. It can be set bigger.
	char c;
	int number_of_c;
	cout << "Please input the string:"<<endl;
	cin >> s;
	cout <<"Please input the character you want to search in your string:"<<endl;
	cin >> c;
	number_of_c = find_occur_times(s,c);
	cout << c<< " appears " << number_of_c << " times in the string " << s<<"."<<endl;
	return 0;

}

int find_occur_times(char* s, char c)
{
	int count = 0;
	if (*s == '\0') return 0;
	
	if (*s ==c)
		return find_occur_times(s+1,c)+1;
	else 
		return find_occur_times(s+1,c);

}
