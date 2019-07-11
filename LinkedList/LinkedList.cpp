#include "LinkedList.h"
// Node in Question
struct Node {
	int data;
	Node *next;
};

// Creation of a linked list
// This class should have 2 important pointers: Head and Tail (both set to null on the constructor)

class LinkedList {

private:
	Node *head, *tail;

public:
	// Set both head and tail to null to avoid any garbage value
	LinkedList() {
		head = NULL;
		tail = NULL;
	}

	// Creation of a node
	void createNode(int value) {

		Node *temp = new Node;
		temp->data = value;
		temp->next = NULL;

		// Check if head is NULL
		if (head == NULL) {
			// If so, set head to be the temp node AND tail to be the temp node as well and then delete the temp node.
			head = temp;
			tail = temp;
			temp = NULL;
		} else {
			// Otherwise, assuming head has nodes attached already, then do the following:
			// in the tail (last node), set it's next pointer to be equal to the temp node defined above
			// And finally, set the tail to be the new node.
			tail->next = temp;
			tail = temp; 
		}
	}

	// Displaying node sequences
	// Logic: We create a temp node and pass the address of the head node to it.
	// Loop then iterates to as much as the amount of nodes there are.
	// If temp node becomes equal to NULL, then the loop would terminate
	void display() {
		Node *temp = new Node;
		temp = head;

		while (temp != NULL) {
			cout << temp->data << "\t";
			temp = temp-> next;
		}
	}

	~LinkedList() {
		// Some cleanup here
	}
	
};