# Reverse an Array

## Description
This program implements a function `reverse_array` that takes an array of integers and its size as input and **reverse** the array without creating an additional one

## Function Signature
```c
int reverse_array(int arr[], int size);
```

## Constraints
- The array will always have at least one element.
- The array reverse in place
- No use of pointers, dynamic memory allocation, or string functions.

## Example Usage
```c
#include <stdio.h>

void reverse_array(int arr[], int size);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};

    reverse_array(arr1, 5);  // After reversing: {5, 4, 3, 2, 1}
    reverse_array(arr2, 3);  // After reversing: {30, 20, 10}

    // Print reversed arrays
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
```

## Expected Output
```
5 4 3 2 1 
30 20 10
```

## How It Works
1. The function swaps the elements of the array from the beginning and the end until it reaches the middle.
2. It modifies the array in-place, reversing the order of the elements.

## To Do
- Add additional test cases with different array sizes.
- Test with arrays that have an even number of elements.

## License
This project is open-source and free to use.
