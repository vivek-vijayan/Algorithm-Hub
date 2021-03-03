/* Tree Traversal Concept
 * ---------------------
 * Programmer : Vivek Vijayan
 * GitHub : https://github.com/vivek-vijayan
 *
 * Data -> Binary tree
 *  			n1
 *  		      /	   \
 *  		   n2	     n3
 *  		   	    /   \
 *  		   	  n4     n5
 * 
 * Inorder , Preorder & Postorder
 */

#include "iostream"
#include "string"
#include "vector"

struct Node{
	int data;
	struct Node *leftNode, *rightNode;
	Node(int nodeData){
		this -> data = nodeData;
		leftNode = rightNode = NULL;
	}
};

int InOrder(struct Node *node){
	if(node == NULL)
		return 0;
	InOrder(node -> leftNode);
	std::cout << node -> data << std::endl;
	InOrder(node -> rightNode);
	return 0;
}

int PostOrder(struct Node *node){
	if(node == NULL) return 0;
	PostOrder(node -> leftNode);
	PostOrder(node -> rightNode);
	std::cout << node -> data << std::endl;
	return 0;
}

int PreOrder(struct Node *node){
	if(node == NULL) return 0;
	std::cout << node -> data << std::endl;
	PreOrder(node -> leftNode);
	PreOrder(node -> rightNode);
	return 0;
}

int main(){
	Node *n1 = new Node(5);
	n1 -> leftNode = new Node(4);
	n1 -> rightNode = new Node(3);
	n1 -> rightNode -> leftNode = new Node(2);
	n1 -> rightNode -> rightNode = new Node(1);

	// Tree traversal - inorder
	std::cout << "InOrder Output : " << std::endl; InOrder(n1);
	std::cout << "PostOrder Output : " << std::endl; PostOrder(n1);
	std::cout << "PreOrder Output : " << std::endl; PreOrder(n1);
}

