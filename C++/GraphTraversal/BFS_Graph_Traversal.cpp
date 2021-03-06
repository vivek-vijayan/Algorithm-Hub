/* GRAPH _ Breadth First Search
 * -------------------------------------
 * Developer : Vivek Vijayan
 * GitHub : https://github.com/vivek-vijayan
 *
 */

#include "iostream"
#include "string"
#include "vector"
#include "list"

class Node{
	public: int nodeData;
		std::string nodeName;
		bool visited;
		std::vector <Node> linkedNode;

	Node(int data, std::string nodename){
		nodeData = data;
		nodeName = nodename;
	}

	void isVisited(){
		visited = true;
		std :: cout << "Node visited";
	}

	void addLink(Node *n){
		linkedNode.push_back(*n);
		std :: cout << "Linked Node" << std :: endl;
	}

	void showLink(){
		std::vector <Node> :: iterator i;
		std::cout << nodeName << " -> ";
		for(i = linkedNode.begin(); i != linkedNode.end(); ++i){
			std::cout << i -> nodeName << " ";
		}
		std::cout << std::endl;
	}
};

int showDFSTraversal(Node *startNode){
	if(startNode -> visited == true) return 0;
	std::vector <Node> :: iterator traversal;
	for(traversal = startNode -> linkedNode.begin(); traversal != startNode -> linkedNode.end(); ++traversal){
		traversal -> visited = true;
		std::cout << "Node Visited : " << traversal -> nodeName << std::endl;
		// showDFSTraversal();
	}
	return 1;
}
	

	

int main(){
	Node *n1 = new Node(1, "Node 1");
	Node *n2 = new Node(2, "Node 2");
	Node *n3 = new Node(3, "Node 3");
	
	n1 -> addLink(n2);
	n2 -> addLink(n3);
	n2 -> addLink(n1);
	n3 -> addLink(n2);

	n1 -> showLink();
	n2 -> showLink();
	n3 -> showLink();

	showDFSTraversal(n1);
	

}
