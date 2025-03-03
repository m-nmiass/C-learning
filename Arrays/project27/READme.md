# Find the Row with the Maximum Sum in a 2D Array

## Description
This program implements a function `max_row_sum` that takes a **2D array (matrix)** of integers and its dimensions (number of rows and columns) as input and returns the **index of the row** that has the highest sum. If multiple rows have the same maximum sum, the function returns the first one.

## Function Signature
```c
int max_row_sum(int rows, int cols, int matrix[rows][cols]);
```

## Constraints
- The matrix will always have at least **one row and one column**.
- If there are multiple rows with the same maximum sum, return the **first** occurrence.
- No use of pointers, dynamic memory, or string functions.

## Example Usage
```c
#include <stdio.h>

int max_row_sum(int rows, int cols, int matrix[rows][cols]);

int main() {
    int matrix1[3][4] = {
        {1, 2, 3, 4},
        {9, 8, 7, 6},
        {3, 3, 3, 3}
    };

    int matrix2[2][3] = {
        {5, 5, 5},
        {1, 1, 1}
    };

    printf("%d\n", max_row_sum(3, 4, matrix1));  // Expected: 1 (sum: 9+8+7+6 = 30)
    printf("%d\n", max_row_sum(2, 3, matrix2));  // Expected: 0 (sum: 5+5+5 = 15)

    return 0;
}
```

## Expected Output
```
1
0
```

## How It Works
1. Iterate through each row and compute the sum of its elements.
2. Keep track of the maximum sum and the row index where it occurs.
3. If a new row has a higher sum, update the index of the maximum sum row.
4. Return the index of the row with the highest sum.

## To Do
- Add test cases for different matrix sizes.
- Optimize the function if necessary.
- Implement an extended version to return multiple row indices if they share the same maximum sum.

## License
This project is open-source and free to use.


