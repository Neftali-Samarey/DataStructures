#include <iostream>
#include "Stack.h"
#include "Stack.cpp"


using namespace std;
int main(int argc, char *argv[]) {
	
	// We are initializing a Stack of type int in this example. 
	// We can also choose to make it type string, float, or object thanks to the templating.
	
	Stack<int> myClass;
	myClass.Push(10);
	myClass.Push(20);
	myClass.Push(30);
	
	
	cout << "Stack Count: " << myClass.Count() << endl;
	
	// Pop off an item from stack and check the count again
	myClass.Pop();
	cout << "Stack Count: " << myClass.Count() << endl;
	
	// Peek the Stack
	cout << "Item at the top is " << myClass.Peek();
	
	
}