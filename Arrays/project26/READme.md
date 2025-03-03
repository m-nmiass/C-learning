# Find the Column with the Maximum Sum in a 2D Array

## Description
This program implements a function `max_col_sum` that takes a **2D array (matrix)** of integers and its dimensions (number of rows and columns) as input and returns the **index of the column** that has the highest sum. If multiple columns have the same maximum sum, the function returns the first one.

## Function Signature
```c
int max_col_sum(int rows, int cols, int matrix[rows][cols]);
```

## Constraints
- The matrix will always have at least **one row and one column**.
- If multiple columns have the same maximum sum, return the **first** occurrence.
- No use of pointers, dynamic memory, or string functions.

## Example Usage
```c
#include <stdio.h>

int max_col_sum(int rows, int cols, int matrix[rows][cols]);

int main() {
    int matrix1[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    int matrix2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("%d\n", max_col_sum(3, 4, matrix1));  // Expected: 3 (sum: 4+8+12 = 24)
    printf("%d\n", max_col_sum(3, 3, matrix2));  // Expected: 2 (sum: 3+6+9 = 18)

    return 0;
}
```

## Expected Output
```
3
2
```

## How It Works
1. Iterate through each **column** and compute the sum of its elements.
2. Keep track of the **maximum sum** and the **column index** where it occurs.
3. If a new column has a higher sum, update the index.
4. Return the **index of the column with the highest sum**.

## To Do
- Add test cases for different matrix sizes.
- Optimize the function if necessary.
- Implement an extended version to return multiple column indices if they share the same maximum sum.

## License
This project is open-source and free to use.


