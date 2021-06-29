/* Bubble sort - CPP
 *
 * Developer: Vivek Vijayan
 */

#include "iostream"

int main()
{
	int *list, totalNum, temp;
	std::cout << "Total num" << std::endl; std::cin >> totalNum;
	for(int i=0; i<totalNum; i++) std::cin >> list[i];

	// Sorting
	for(int i = 0; i < totalNum - 1; i++) 
	{
		for(int j = 0; j < totalNum - 1; j++)
		{
			if(list[j] > list[j+1]) 
			{
				temp = list[j]; list[j] = list[j+1]; list[j+1] = temp;
			}
		}
	}

	// Printing
	std::cout << " After sorting " << std::endl;
	for(int i = 0; i < totalNum; i++) std::cout << list[i] << std::endl;
}
