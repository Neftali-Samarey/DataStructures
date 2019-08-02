#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

using namespace std;

// Make the class a generic to comform to any data type during storage
template <class T>
class Stack {
	private:
	vector<T> storage;
	
	// Public Operations
	public:
		Stack();
		void Push(T item);
//		void Pop();
//		T Peek();
//		bool isEmpty;
};


#endif