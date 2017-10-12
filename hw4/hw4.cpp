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
	//initialize some variables
	const int MAX_NUM_OF_BOOKS = 20;//Assume no more than 20 books are going to be bought
	int mylist[MAX_NUM_OF_BOOKS];
	int num_in_list = 0;
	bool sorted = false;

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
                    if (num_in_list<20){
                        insert(mylist,num_in_list,new_element);
                        num_in_list++;
                    }
                    else
                        cout <<" You already have 20 books on the list!"<<endl;
                    print(mylist,num_in_list);
		    sorted = false;
                    break;
            case 2: int at_position;
                    cout << "Please type in the element"<<endl;
                    cin >> new_element;
                    cout <<"At what position?"<<endl;
                    cin >> at_position;
                    while (at_position > num_in_list|| at_position <1){
                        cout << "The position you entered is out of bound. You only have "<<num_in_list<<" books on the list."<<endl;
                        cout << "Please enter another position"<<endl;
                        cin >> at_position;
                    }
                    insert_at(mylist, num_in_list, at_position,new_element);
                    num_in_list++;
                    print(mylist,num_in_list);
		    sorted = false;
                    break;
            case 3: int element;
                    cout << "Please enter the ISBN number that you want to find"<<endl;
                    cin >> element;
                    int position;
                    position = find_linear(mylist,num_in_list,element);
                    if (position !=1000)
                        cout << "The book with ISBN " << element<<" is in position "<< position <<"."<<endl;
                    if (position == 1000)
                        cout <<"The book with ISBN " <<element <<" is not in the list."<<endl;
                    break;
            case 4: cout << "Please enter the ISBN number that you want to find"<<endl;
		    cin >>element;
		    position = find_binary(mylist,num_in_list,element, sorted);
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
                    while (del_position<1||del_position > num_in_list){
                        cout << "The position you entered is out of bound. You only have "<<num_in_list<<" books on the list."<<endl;
                        cout << "Please enter another position"<<endl;
                        cin >> del_position;
                    }
                    delete_item_position( mylist, num_in_list, del_position) ;
                    num_in_list--;
                    print(mylist,num_in_list);
                    break;
            case 6: cout <<"Which element would you like to delete (by ISBN number)?"<<endl;
                    int del_element;
                    cin >> del_element;
                    while (find_linear(mylist,num_in_list,del_element)==1000){
                        cout << "The element you entered is not on the list."<<endl;
                        cout << "Please enter another element"<<endl;
                        cin >> del_element;
                    }
                    delete_item_isbn(mylist, num_in_list, del_element);
                    num_in_list--;
                    print(mylist,num_in_list);
                    break;
            case 7: sort_list_selection(mylist, num_in_list);
		    print(mylist,num_in_list);
		    sorted = true;
		    break;
            case 8: sort_list_bubble(mylist, num_in_list);
                    print(mylist,num_in_list);
		    sorted = true;
                    break;
            case 9: print(mylist,num_in_list);
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

void print (int mylist[ ], int num_in_list){
    cout << "Your list is now"<<endl;

    for (int i =0; i< num_in_list;i++)
        cout << i+1<<".  "<< *(mylist+i)<<endl;

}
void insert(int mylist[ ], int num_in_list, int new_element){
    *(mylist + num_in_list) = new_element;
}
void insert_at(int mylist[ ], int num_in_list, int at_position, int new_element){
   for (int i = num_in_list; i>=at_position;i--){
        *(mylist+i) = *(mylist+i-1);
   }
   *(mylist+at_position-1) = new_element;
}

int find_linear(int mylist [ ], int num_in_list, int element){
    int element_position = 0;
    for(int i=0;i<num_in_list;i++){
        if (*(mylist+i)==element){
            element_position =i;
            break;
        }
    }
    if (*(mylist+element_position)==element)
        return element_position+1;
    else 
        return 1000;
}

int find_binary(int mylist [ ], int num_in_list, int element, bool sorted){
	if (sorted){
		int low=0;
		int high=num_in_list-1;
		int middle;
		while(low<=high){
			middle = low+high/2;
			if (*(mylist+middle) == element)
				break;
			if (element <*(mylist+middle))
				high = middle-1;
			else
				low = middle+1;
		}
		if (*(mylist+middle) == element)
			return middle+1;
		else return 1000;
	}
	else return -1;
}

void delete_item_position(int mylist [ ], int num_in_list, int position){
    for(int i=position-1;i<num_in_list-1;i++){
        *(mylist+i)=*(mylist+i+1);
    }
}

void delete_item_isbn(int mylist [ ], int num_in_list, int element){
    int position = find_linear(mylist, num_in_list, element);
    delete_item_position(mylist, num_in_list, position);
}

void sort_list_selection(int mylist [ ], int num_in_list){
	for(int i =0;i<num_in_list;i++){
		int min_index = i;
		int temp;
		for(int j = i+1;j<num_in_list;j++){
			if (*(mylist+j)<*(mylist+min_index))
				min_index =j;
		}
		temp = *(mylist+i);
		*(mylist+i) = *(mylist+min_index);
		*(mylist+min_index) = temp;
	}
}

void sort_list_bubble(int mylist [ ], int num_in_list){
	for(int pass =0; pass<num_in_list-1;pass++)
		for(int j =0;j<num_in_list-1-pass;j++){
			if(*(mylist+j)>*(mylist+j+1)){
				int temp = *(mylist+j+1);
				*(mylist+j+1)=*(mylist+j);
				*(mylist+j) = temp;
			}
		}		
}








