# Find the Index of the Minimum Element in an Array

## Description
This program implements a function `find_min_index` that takes an array of integers and its size as input and returns the **index** of the smallest element in the array.

## Function Signature
```c
int find_min_index(int arr[], int size);
```

## Constraints
- The array will always have at least one element.
- If there are multiple occurrences of the smallest value, return the **first** occurrence.
- No use of pointers, dynamic memory allocation, or string functions.

## Example Usage
```c
#include <stdio.h>

int find_min_index(int arr[], int size);

int main() {
    int arr1[] = {3, 7, 2, 8, 4};
    int arr2[] = {-10, -3, -7, -1};
    int arr3[] = {42, 5, 5, 42};

    printf("%d\n", find_min_index(arr1, 5));  // Expected: 2
    printf("%d\n", find_min_index(arr2, 4));  // Expected: 0
    printf("%d\n", find_min_index(arr3, 4));  // Expected: 1

    return 0;
}
```

## Expected Output
```
2
0
1
```

## How It Works
1. The function iterates through the array.
2. It keeps track of the **smallest value** and its **index**.
3. If a smaller value is found, it updates the index.
4. Once the loop completes, it returns the index of the smallest element.

## To Do
- Add additional test cases.
- Optimize the function if necessary.

## License
This project is open-source and free to use.


