#include<iostream>
#include<string.h>

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
}

