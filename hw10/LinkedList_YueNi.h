//header file for class LinkedList

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <iomanip>
#include "Node_YueNi.h"
using namespace std;
class LinkedList{
public:
	LinkedList();
	~LinkedList();
	int size() const;
	void addToStart(Node *);
	void addToEnd(Node *);
	void printList();
	bool removeFromStart();
	bool removeFromEnd();
	void removeNodeFromList(int);
	void removeNodeFromList(string);
private:
	Node *myHead;
	Node *myTail;
	int mySize;
};
LinkedList::LinkedList(){
	myHead = NULL;
	myTail = NULL;
	mySize =0;
}//constructor

LinkedList::~LinkedList(){
	if (mySize!=0){
		cout << "Destroying nodes ...\n";
		Node * currentPtr = myHead;
		Node * tempPtr;
		
		while (currentPtr != NULL){
			tempPtr = currentPtr;
			cout << tempPtr->itemNo << "    " <<tempPtr->itemName << "\n";
			currentPtr = currentPtr->next;
			delete tempPtr;
		}
	}
	cout << "All nodes destroyed\n"<<endl;
}//deconstructor

int LinkedList::size() const{
	return mySize;
}

void LinkedList::addToStart(Node * newNodePtr){
	if (mySize==0){
		myHead = newNodePtr;
		myTail = newNodePtr;
	}
	else{
		newNodePtr->next = myHead;
		myHead = newNodePtr;
	}
	mySize ++;
}

void LinkedList::addToEnd( Node * newNodePtr){
	 if (mySize==0){
                myHead = newNodePtr;
                myTail = newNodePtr;
        }
        else{
                myTail->next = newNodePtr;
                myTail = newNodePtr;
        }
	mySize ++;
}

void LinkedList::printList(){
	cout << "List"<<endl;
	cout << "Item No" << setw(4) << "Item Name"<<endl;
	Node * ptr = myHead;
	while (ptr){
	cout << ptr->itemNo << setw(16) << ptr->itemName<<endl;
	ptr = ptr->next;
	}
	cout <<endl;
}


bool LinkedList::removeFromStart(){
	bool removed;
	if (mySize ==0)
		removed = false;
	if (mySize ==1){
		myHead = NULL;
		removed = true;
	}
	else{
		myHead = myHead->next;
		removed = true;
	}
	if (removed) mySize --;
	return removed;
}

bool LinkedList::removeFromEnd(){
	bool removed;
	if (mySize ==0)
		removed = false;
	if (mySize ==1){
		myHead = NULL;
		removed = true;
	}
	else{
		Node * temp = myHead;
		Node * temp_1;
		while(temp->next!=NULL){
			temp_1 =temp;
			temp = temp->next;
		}
		temp_1->next = NULL;
		removed = true;
	}
	if (removed)
		mySize --;
}


void LinkedList::removeNodeFromList(int nu){
	bool removed;
	if (mySize ==0)
		removed = false;
	if (mySize ==1){
                if (myHead->itemNo ==nu){
                        myHead=NULL;
                        removed = true;
                }
                else removed = false;
        }

	else{
		Node * node_with_nu = myHead;
		Node * temp = node_with_nu;
		if (myHead->itemNo == nu){
			myHead = myHead->next;
			removed = true;
		}
		else{
		while ((node_with_nu->next !=NULL)&&(node_with_nu->itemNo !=nu)){
			temp = node_with_nu;
			node_with_nu = temp->next;
		}
		if (node_with_nu->itemNo ==nu){
			temp->next = node_with_nu->next;
			removed = true;
		}
		else removed = false;
		}
	}
	if (removed) mySize --;
}

void LinkedList::removeNodeFromList(string name){
	bool removed;
        if (mySize ==0)
                removed = false;
	if (mySize ==1){
		if (myHead->itemName ==name){
			myHead=NULL;
			removed = true;
		}
		else removed = false;
	}
        else{
                Node * node_with_name = myHead;
                Node * temp = node_with_name;
		if (myHead->itemName == name){
                        myHead = myHead->next;
                        removed = true;
                }
                else{

                while ((node_with_name->next!=NULL)&&(node_with_name->itemName !=name)){
                        temp = node_with_name;
                        node_with_name = temp->next;
                }
                if (node_with_name->itemName ==name){
                        temp->next = node_with_name->next;
                        removed =  true;
                }
                else removed = false;
		}
        }
	if (removed) mySize --;
}




#endif
	
