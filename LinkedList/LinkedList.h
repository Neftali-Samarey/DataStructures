#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Class definition belongs here

#include <iostream>

using namespace std;

// Node in Question
struct Node {
	int data;
	Node *next;
};


class LinkedList {
	
	private:
		Node *head, *tail;
		
	public:
		// Public definitions
		
		LinkedList();
		void createNode(int value);
		void display();
		~LinkedList();
	
};

#endif