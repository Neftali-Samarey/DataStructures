#include "LinkedList.h"

// THIS CLASS IMPLEMENTS WHAT IS DEFINED IN THE HEADER FILE OF THE PART


// Creation of a linked list
// This class should have 2 important pointers: Head and Tail (both set to null on the constructor)


	// Set both head and tail to null to avoid any garbage value
	LinkedList::LinkedList() {
		head = NULL;
		tail = NULL;
	}

	// Creation of a node
	void LinkedList::createNode(int value) {

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
	
	// INSERT
	// This method will insert a new node with the value in front of the linked list.
	void LinkedList::insert(int value) {
		
		// As usual, create a temp node
		Node *temp = new Node;
		
		// Set temp node's data value to the value of the argument
		temp->data = value;
		
		// Set temp's next pointer to be equal to head
		temp->next = head;
		
		// set head to then be temp
		head = temp;
		
	}

	// Displaying node sequences
	// Logic: We create a temp node and pass the address of the head node to it.
	// Loop then iterates to as much as the amount of nodes there are.
	// If temp node becomes equal to NULL, then the loop would terminate
	void LinkedList::display() {
		Node *temp = new Node;
		temp = head;

		while (temp != NULL) {
			cout << temp->data << " -> ";
			temp = temp-> next;
		}
	}
	
	// INSERT AT POSITION
	// Logic: This will allow us to insert a new node at any given position within the bounds of the list.
	// Arg 1: Position within the linked list,
	// Arg 2
	void LinkedList::insertAtPosition(int position, int value) {
		
		cout << "attempting to insert at position" << endl;
	}

	LinkedList::~LinkedList() {
		// Some cleanup here
		head = NULL;
		tail = NULL;
	}
	
