// This code is contributed by Vivek Vijayan
// http://github.com/vivek-vijayan

/*
    Insertion Sort 
    ---------------
    Average & Worst case - O(n^2)
*/

#include "iostream"
#include "vector"


int main(int argc, char const *argv[])
{
    std::vector <int> array;
    char option = 'y';
    int data;

    getdata :   std::cout << " Enter the element you want to enter : " << std::endl;
                std::cin >>  data;
                array.push_back(data);
                std::cout << "Add more element? (y/n) " << std::endl;
                std::cin >> option; 
                if (option=='y') goto getdata;
                std::cout << "Data recorded" << std::endl;
    
    // Main Algorithm - Insertion sort
    int SortingHead = 1, temp;
    while(SortingHead != array.size())
    {
        if(array[SortingHead] < array[SortingHead - 1]){
            temp = array[SortingHead];
            array[SortingHead] = array[SortingHead - 1];
            array[SortingHead - 1] = temp;

            if(SortingHead != 1){
                SortingHead--;
            }
        }
        else{
            SortingHead +=1;
        }
    }

    std::vector <int> :: iterator i;
    std::cout << "Sorted array : " << std::endl;
    for(i = array.begin(); i != array.end(); i++){
        std::cout << *i << std::endl;
    }
    return 0;
}
