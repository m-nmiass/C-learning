# Check if an Array is a Palindrome

## Description
This program implements a function `is_palindrome` that takes an array of integers and its size as input and checks whether the array is a palindrome. A palindrome is an array that reads the same forwards and backwards.

## Function Signature
```c
int is_palindrome(int arr[], int size);
```

## Constraints
- The array will always have at least one element.
- The function must check whether the array is the same when read from both ends.

## Example Usage
```c
#include <stdio.h>
#include <stdbool.h>

int is_palindrome(int arr[], int size);

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {10, 20, 30};
    int arr3[] = {5, 5, 5, 5};

    printf("%d\\n", is_palindrome(arr1, 5));  // Expected: 1
    printf("%d\\n", is_palindrome(arr2, 3));  // Expected: 0
    printf("%d\\n", is_palindrome(arr3, 4));  // Expected: 1

    return 0;
}

```

## Expected Output
```
1
0
1
```

## How It Works
1. The function uses two pointers: one starting from the beginning **(i = 0)** and one from the end **(j = size - 1)**.
2. It compares the elements at **arr[i]** and **arr[j]**.
3. If at any point they don’t match, it returns **0** (not a palindrome).
4. If all elements match (or the pointers cross each other), it returns **1** (palindrome).

## To Do
- Add additional test cases.
- Ensure the function works for both odd and even length arrays.

## License
This project is open-source and free to use.
