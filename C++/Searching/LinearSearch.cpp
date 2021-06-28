/* Linear Search
 * --------------
 * Developer : Vivek Vijayan
 */

#include "iostream"
#include "stdio.h"

int main()
{
	int *data;
	int position = 0, totalNum;
	int userData, searchKey;
	std::cout << " ** Linear Seaching ** \n\n Enter the total number you gonna enter ?" << std::endl;
	std::cin >> totalNum;
	
	std::cout << "Enter the " << totalNum << " one by one" << std::endl;
	for(int i = 0; i < totalNum; i++)
	{
		std::cin >> userData;
		data[i] = userData;
		std::cout << "Data inserted " << std::endl;

	}

	std::cout << "Enter the key to search the data " << std::endl;
	std::cin >> searchKey;

	// Linear search
	
	for(int j = 0; j < totalNum ; j++){
		if(data[j] == searchKey){
			std::cout << "Data found in the position : " << j << std::endl;
			return 0;
		}
	}
	std::cout << "No data found as such " << std::endl;

	return 0;
}


