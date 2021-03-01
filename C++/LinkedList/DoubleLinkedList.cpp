#include<iostream>

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};

void printListForward(Node *n){
	while(n != NULL){
		std::cout << n -> data << std::endl;
		n = n -> next;
	}
}

void printListBackward(Node *n){
	while(n != NULL){
		std::cout << n -> data << std::endl;
		n = n -> prev;
	}
}

int main(){
	Node *A1 = new Node();
	Node *A2 = new Node();
	Node *A3 = new Node();
	
	// Linking the list
	A1 -> next = A3;
	A1 -> prev = A2;

	A2 -> next = A1;
	A2 -> prev = NULL;

	A3 -> next = NULL;
	A3 -> prev = A1;

	// Providing the data to the nodes
	A1 -> data = 500;
	A2 -> data = 200;
	A3 -> data = 300;
	
	// Printing the data in forward
	printListForward(A2);

	// Printing the data in backward
	printListBackward(A3);
}
