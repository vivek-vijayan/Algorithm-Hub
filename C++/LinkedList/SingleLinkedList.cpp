#include<iostream>
#include<string.h>

// Node Struct Creation
struct Node{
	int data;
	struct Node *next;
};

void PrintList(Node *n){
	while(n != NULL){
		std::cout << n -> data << std::endl;
		n = n->next;
	}
}


// Creation of New Node with a new address and pointing to NULL with 0 data
Node *CreateNode(){
	Node *newNode = new Node();
	newNode -> data = 0;
	newNode -> next = NULL;
	return newNode;
}
void AddNode(Node *Head, int data){
	Node *temp, *prevHead;
	temp = CreateNode();
	temp -> data = data;
	Head -> next = temp;
}
	


int main(){
	Node *n1;
	Node *n2;
	n1 = new Node();
	n2 = new Node();
	n1 -> data  = 100;
	n2 -> data = 200;
	n1 -> next = n2;
	n2 -> next = NULL;
	std::cout<<"Show the data"<<std::endl;
	PrintList(n1);
	// Adding new Node
	AddNode(n2, 1000);
	std::cout << "--- Added new node after n2 ----"<< std::endl; 
	// Printing the list again
	PrintList(n1);
}

