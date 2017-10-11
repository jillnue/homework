//homework 4
//book list program
//Yue Ni

#include<iostream>
#include<iomanip>
using namespace std;

void insert(int mylist[ ], int num_in_list, int new_element);
void insert_at(int mylist[ ], int num_in_list, int at_position, int new_element);
int find_linear(int mylist [ ], int num_in_list, int element);
int find_binary(int mylist [ ], int num_in_list, int element, bool sorted);
void delete_item_position(int mylist [ ], int num_in_list, int position) ;	
void delete_item_isbn(int mylist [ ], int num_in_list, int element) ;
void sort_list_selection(int mylist [ ], int num_in_list);
void sort_list_bubble(int mylist [ ], int num_in_list);
void print (int mylist[ ], int num_in_list);


int main()
{
	cout << "Welcome to the Book list program."<<endl;
	bool not_quit = true;
	while(not_quit)
	{
		cout << "What would you like to do?"<<endl;
		cout <<"     1. add an element to the end of list"<<endl;
		cout <<"     2. add an element at a location"<<endl;
		cout <<"     3. find an element by ISBN number (linear search)"<<endl;		
		cout <<"     4. find an element by ISBN number (binary search)"<<endl;
		cout <<"     5. delete an element at position"<<endl;
		cout <<"     6. delete an element by ISBN number"<<endl;
		cout <<"     7. sort the list (using selection sort)"<<endl;
		cout <<"     8. sort the list (using bubble sort)"<<endl;
		cout <<"     9. print the list"<<endl;
		cout <<"     0. exit"<<endl;
		cout << "your choice ---"<<endl;
		int option;
		cin >> option;





	}

	return 0;
}
