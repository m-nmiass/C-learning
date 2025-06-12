#include <stdio.h>

int main() {
    int len = 10;

    //printf("Enter the array length: ");
    //scanf("%d", &len);

    int arr[len];
    printf("Enter the array: ");
    for (int i = 0; i < len; i++)
        scanf("%1d", &arr[i]);

    int max_len = 1;        
    int max_start = 0;     

    int curr_len = 1;
    int curr_start = 0;

    for (int i = 1; i < len; i++) {
        if (arr[i] > arr[i - 1]) {
            curr_len++;
        } else {
            if (curr_len > max_len) {
                max_len = curr_len;
                max_start = curr_start;
            }
            curr_len = 1;
            curr_start = i;
        }
    }

    if (curr_len > max_len) {
        max_len = curr_len;
        max_start = curr_start;
    }

    printf("Longest increasing sequence length: %d\n", max_len);
    printf("Sequence: ");
    for (int i = max_start; i < max_start + max_len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

