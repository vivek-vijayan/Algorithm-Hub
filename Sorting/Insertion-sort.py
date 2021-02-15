
# Array list
array = [15, 12, 17, 3, 1, 14]

# Sorting Head - start with 1
SortingHead = 1    

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

# This code is contributed by Vivek Vijayan
# http://github.com/vivek-vijayan
# https://ide.geeksforgeeks.org/BlCQ85hc48 