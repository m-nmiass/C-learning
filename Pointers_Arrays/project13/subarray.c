#include <stdio.h>
#include <stdbool.h>

#define MAX 100

void read_arr(int arr[], int size);
bool find_subarrays(int arr[], int size, int target, int *start, int **end);
void result_output(int start_idx, int end_idx);

int main() {
    int arr[MAX];
    int n;

    do {
        printf("Enter the size of the array up to 100: ");
        scanf("%d", &n);
        if (n > 100 || n <= 0)
            printf("Invalid input, try again: ");
    } while (n > 100 || n <= 0);

    read_arr(arr, n);

    int target;
    printf("Enter the target number: ");
    scanf("%d", &target);

    int *end; 
    for (int *start = arr; start < arr + n; start++) { 
        if (find_subarrays(arr, n, target, start, &end)) { 
            result_output(start - arr, end - arr);
        }
    }

    return 0;
}

void read_arr(int arr[], int size) {
    printf("Enter the array elements: ");
    for (int *p = arr; p < arr + size; p++)
        scanf("%d", p);
}

bool find_subarrays(int arr[], int size, int target, int *start, int **end) {
    int sum = 0; 
    for (int *p = start; p < arr + size; p++) { 
        sum += *p;
        if (sum == target) {
            *end = p; 
            return true;
        }
        if (sum > target) {
            break; 
        }
    }
    return false;
}

void result_output(int start_idx, int end_idx) {
    printf("Subarray found from index %d to %d\n", start_idx, end_idx);
}
