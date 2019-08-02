#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

using namespace std;

// Generic class can comform to any type when initalizing it in the client driver

template <class T>
class Stack {
	private:
	// In this example, for storage, we are using (or wrapping) this vector in this stack implementation
	vector<T> storage; 
	int storageCount;
	
	// Public Operations
	public:
		Stack();
		void Push(T item);
		bool isEmpty();
		void Pop();
		int Count();
		T Peek();
};


#endif