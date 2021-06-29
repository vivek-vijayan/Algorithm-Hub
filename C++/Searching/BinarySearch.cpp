/* Binary Search
 * -------------
 * Developer : Vivek Vijayan
 */

#include "iostream"

void binarySearch(int, int, int, int*);



int main()
{
	int *list, totalNum, key;
	std::cout << "Enter the total numbers to be added in the array" << std::endl;
	std::cin >> totalNum;
	std::cout << "Enter the numbers in ascending order " << std::endl;
	for (int i=0; i< totalNum ; i++)
		std::cin >> list[i];

	std::cout << "List is ready, now enter the search key :" << std::endl;
	std::cin >> key;
	binarySearch(totalNum, 0 , key, list);
	return 0;	
}

void binarySearch(int max, int min, int searchKey, int *data)
{
	int mid, high = max, low = min;
	int *value = data;
	mid = low + (high - low) / 2;
	if (data[mid] == searchKey) std::cout << " Element found at position : " << mid << std::endl;
	else if (data[mid] > searchKey) binarySearch(mid, low, searchKey, value);
	else binarySearch(high, mid, searchKey, value);
}
