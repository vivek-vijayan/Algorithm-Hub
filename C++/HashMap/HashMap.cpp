#include<iostream>
#include<map>
#include<iterator>

int main(){
	int data;
	int key;
	std::map<int, int> hashmap1;
	std::map<int, int>:: iterator hashiterator;
	
	// Adding the data to the hashmap
	hashmap1.insert(std::pair<int, int>(1,10));
	hashmap1.insert(std::pair<int, int>(2,20));
	hashmap1.insert(std::pair<int, int>(3,30));

	// Printing the hashmap
	for(hashiterator = hashmap1.begin(); hashiterator != hashmap1.end(); ++hashiterator){
		std::cout << " First Data : " << hashiterator -> first << std::endl;
		std::cout << " Second Data : " << hashiterator -> second << std::endl;
	}
}
