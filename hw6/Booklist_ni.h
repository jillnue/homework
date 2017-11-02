// hw6
// Booklist_ni.h
// Implement the booklist assignment using classes
// Part 1 class declaration


#ifndef BOOKLIST_H
#define BOOKLIST_H

class Booklist{

public:
	Booklist();
	void insert( int new_element);
	void insert_at( int at_position, int new_element);
	int find_linear( int element);
	int find_binary( int element);
	void delete_item_position(int position) ;
	void delete_item_isbn( int element) ;
	void sort_list_selection();
	void sort_list_bubble();
	void print ();


private:
	bool sorted;
	int mylist[20];//max number of books that can be on the list is set to be 20
	int num_in_list;
};

#endif

