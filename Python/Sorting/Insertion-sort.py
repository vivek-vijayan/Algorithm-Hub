
# This code is contributed by Vivek Vijayan
# http://github.com/vivek-vijayan
# Sorting Head - start with 1
SortingHead = 1   

# Array list
array = []

while str(input("Add new value? (y/n) ")) == "y":
    array.append(input("List input  :"))


# Main Algorithm - Insertion Algorithm
while SortingHead != len(array):
    if(array[SortingHead] < array[SortingHead - 1]):
        # Swap the element if a[i] < a[i-1]
        array[SortingHead], array[SortingHead - 1] = array[SortingHead - 1], array[SortingHead]
        
        # Bring the header to before element as it is swapped. ignore if it swapped the first element as index is 0 
        if SortingHead != 1:
            SortingHead -= 1
    else:
        SortingHead += 1

# Printing the sorted array
print(array)
