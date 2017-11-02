// HW6
// Implement the booklist assignment using classes
// Part 3 class implementation

#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include "Booklist_ni.h"

int main(){
	Booklist bl;
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
	switch(option)
        {
            case 1: int new_element;
                    cout <<"Please type in the element"<<endl;
                    cin >> new_element;
                    bl.insert(new_element);
                    bl.print();
                    break;
            case 2: int at_position;
                    cout << "Please type in the element"<<endl;
                    cin >> new_element;
                    cout <<"At what position?"<<endl;
                    cin >> at_position;
		    bl.insert_at(at_position,new_element);
		    bl.print();
		    break;
			
	    case 3: int element;
                    cout << "Please enter the ISBN number that you want to find"<<endl;
                    cin >> element;
                    int position;
                    position = bl.find_linear(element);
                    if (position !=1000)
                        cout << "The book with ISBN " << element<<" is in position "<< position <<"."<<endl;
                    if (position == 1000)
                        cout <<"The book with ISBN " <<element <<" is not in the list."<<endl;
                    break;
            case 4: cout << "Please enter the ISBN number that you want to find"<<endl;
                    cin >>element;
                    position = bl.find_binary(element);
                    if (position !=1000 && position !=-1)
                        cout << "The book with ISBN " << element<<" is in position "<< position <<"."<<endl;
                    if (position == 1000)
                        cout <<"The book with ISBN " <<element <<" is not in the list."<<endl;
                    if (position ==-1)
                        cout << "The list needs to be sorted first before performing binary search"<<endl;
                    break;


	   case 5: cout << "Which element would you like to delete (by position)?"<<endl;

                    int del_position;
                    cin >> del_position;
                    bl.delete_item_position( del_position) ;
                    bl.print();
                    break;
            case 6: cout <<"Which element would you like to delete (by ISBN number)?"<<endl;
                    int del_element;
                    cin >> del_element;
                    bl.delete_item_isbn( del_element);
                    bl.print();
                    break;
	    case 7: bl.sort_list_selection();
                    bl.print();
                    break;
            case 8: bl.sort_list_bubble();
                    bl.print();
                    break;
            case 9: bl.print();
                    break;
            case 0: not_quit = false;
                    break;
            default:
                    cout <<"Please enter a number from 0 to 9"<<endl;
                    break;

        }

        }


	

return 0;
}
