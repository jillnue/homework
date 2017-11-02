// HW6
// Implement tha booklist assignment using classes
// Part 2 class declaration

#include<iostream>
using std::cout;
using std::endl;

#include<iomanip>
using std::setw;

#include "Booklist_ni.h"

Booklist::Booklist(){
	sorted = false;
	num_in_list = 0;
}

void Booklist::print (){
    cout << "Your list is now"<<endl;

    for (int i =0; i< num_in_list;i++)
        cout << i+1<<".  "<< *(mylist+i)<<endl;

}

void Booklist::insert( int new_element){
if (num_in_list<20){
    *(mylist + num_in_list) = new_element;
    num_in_list++;
    sorted = false;
}
else cout<<"You already have 20 books on the list."<<endl;
}

void Booklist::insert_at(int at_position, int new_element){
if (num_in_list>=20){
 cout <<"You already have 20 books on the list."<<endl;
}
if (at_position<=num_in_list && at_position >0){
 for (int i = num_in_list; i>=at_position;i--){
        *(mylist+i) = *(mylist+i-1);
   }
   *(mylist+at_position-1) = new_element;
   num_in_list++;
   sorted = false;
}
else cout << "The position you entered is out of bound. You only have "<<num_in_list<<" books on the list."<<endl;

}

int Booklist::find_linear( int element){
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

int Booklist::find_binary(int element){
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

void Booklist::delete_item_position( int position){
if(position >0 && position <= num_in_list){
    for(int i=position-1;i<num_in_list-1;i++){
        *(mylist+i)=*(mylist+i+1);
    }
    num_in_list--;
}
else cout << "The position you entered is out of bound. You only have "<<num_in_list<<" books on the list."<<endl;
}

void Booklist::delete_item_isbn(int element){
    int position = find_linear( element);
if (position>0 && position <=num_in_list){
    delete_item_position( position);
    num_in_list--;
}
else cout << "The element you entered is not on the list."<<endl;
}

void Booklist::sort_list_selection(){
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
	sorted = true;
}

void Booklist::sort_list_bubble(){
        for(int pass =0; pass<num_in_list-1;pass++)
                for(int j =0;j<num_in_list-1-pass;j++){
                        if(*(mylist+j)>*(mylist+j+1)){
                                int temp = *(mylist+j+1);
                                *(mylist+j+1)=*(mylist+j);
                                *(mylist+j) = temp;
                        }
                }
	sorted = true;
}



