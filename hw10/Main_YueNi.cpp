//hw10
//implement a shopping list that uses a linked list to store the information

#include<iostream>
#include<iomanip>
#include<string>
#include "Node_YueNi.h"
#include "LinkedList_YueNi.h"
using namespace std;

void print_menu(){
	cout << "Please choose an option:"<<endl;
        cout << "1. Add a new node at the beginning"<<endl;
        cout << "2. Add a new node at the end"<<endl;
        cout << "3. Remove the beginning node"<<endl;
	cout << "4. Remove the end node"<<endl;
        cout << "5. Remove a node from the list by entering an item number"<<endl;
        cout << "6. Remove a node from the list by entering an item name"<<endl;
	cout << "7. Print out the list"<<endl;
	cout << "8. Quit the program"<<endl;
}
int main(){
	LinkedList shopping_list;
	bool user_continue = true;
	cout << "Welcome to the shopping list program"<<endl;
	do{
		print_menu();
		int choice;
		int product_nu;
		string product_name;
		cin >> choice;
		switch(choice){
		case 1: cout << "Please enter product number to insert at beginning"<<endl;
			cin >> product_nu;
			cout << "Please enter the name for the product"<<endl;
			cin >> product_name;
			Node *temp;
			temp = new Node(product_name, product_nu);
			shopping_list.addToStart(temp);
			shopping_list.printList();
			break;
		case 2: cout << "Please enter product number to insert at end"<<endl;
                        cin >> product_nu;
                        cout << "Please enter the name for the product"<<endl;
                        cin >> product_name;
                        temp = new Node(product_name, product_nu);
                        shopping_list.addToEnd(temp);
                        shopping_list.printList();
			break;
		case 3: shopping_list.removeFromStart();
			shopping_list.printList();
			break;
		case 4:	shopping_list.removeFromEnd();
			shopping_list.printList();
			break;
		case 5: cout << "Please enter the item number that you want to remove"<<endl;
                        cin >> product_nu;
                        shopping_list.removeNodeFromList(product_nu);
                        shopping_list.printList();
                        break;

		case 6: cout << "Please enter product name that you want to remove"<<endl;
                        cin >> product_name;
                        shopping_list.removeNodeFromList(product_name);
                        shopping_list.printList();
                        break;

		case 7: shopping_list.printList();
			break;
		case 8: user_continue = false;
			break;
		default: cout << "Please enter an integer from 1 to 8"<<endl;
			break;
		}
	}while (user_continue);


	return 0;
}
