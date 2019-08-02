#include "Stack.h"

// This will implement the Stack header class

// Init the Stack with a count of size 0
template <class T>
Stack<T>::Stack() {
	cout << "Initializing Stack ..." << endl;
	storageCount = 0;
}

// Push an item of type T onto the Stack
template <class T>
void Stack<T>::Push(T item) {
	storage.push_back(item);
}


// Check if its Empty
template <class T>
bool Stack<T>::isEmpty() {
	if (storage.size() == 0) {
		return true;
	}
	return false;
}

// Pops the top-most item from the Stack

template<class T>
void Stack<T>::Pop() {
	storage.pop_back();
}

// Returns the current count of the internal storage

template<class T>
int Stack<T>::Count() {
	storageCount = storage.size();
	return storageCount;
}

// Peek the top of the Stack
template <class T>
T Stack<T>::Peek() {
	return storage.back();
}
