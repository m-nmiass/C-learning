# Find Maximum Element in an Array

## Description
This program implements a function `find_max` that takes an array of integers and its size as input and returns the **maximum** value in the array.

## Function Signature
```c
int find_max(int arr[], int size);
```

## Constraints
- The array will always have at least one element.
- The array may contain positive and negative numbers.
- No use of pointers, dynamic memory allocation, or string functions.

## Example Usage
```c
#include <stdio.h>

int find_max(int arr[], int size);

int main() {
    int arr1[] = {3, 7, 2, 8, 4};
    int arr2[] = {-10, -3, -7, -1};
    int arr3[] = {42};

    printf("%d\n", find_max(arr1, 5));  // Expected: 8
    printf("%d\n", find_max(arr2, 4));  // Expected: -1
    printf("%d\n", find_max(arr3, 1));  // Expected: 42

    return 0;
}
```

## Expected Output
```
8
-1
42
```

## How It Works
1. The function iterates through the array.
2. It keeps track of the highest value found.
3. Once the loop completes, it returns the maximum value.

## To Do
- Add additional test cases.
- Optimize the function if necessary.

## License
This project is open-source and free to use.


