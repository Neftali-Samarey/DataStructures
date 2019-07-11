#include <iostream>
#include "LinkedList.h"

using namespace std;
int main(int argc, char *argv[]) {
	
	LinkedList myList;
	myList.createNode(6);
	myList.createNode(8);
	myList.createNode(10);
	myList.createNode(5);
	
	myList.display();
	
	return 0;
}