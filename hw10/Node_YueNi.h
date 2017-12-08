//header file for class Node

#ifndef NODE_H
#define NODE_H
#include<string>
using namespace std;
class Node{
friend class LinkedList;
public: Node(string & name, int no)
	:itemName(name), itemNo(no)
	{
		this ->next = NULL;
	}
private:
	string itemName;
	int itemNo;
	Node *next;
};
#endif
