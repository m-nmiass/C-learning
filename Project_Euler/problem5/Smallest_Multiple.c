#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm_range(int n) {
    long long lcm = 1;
    for (int i = 2; i <= n; i++) {
        lcm = (lcm * i) / gcd(lcm, i);
    }
    return lcm;
}

int main() {
    int n = 20;
    printf("Smallest number evenly divisible by all from 1 to %d is: %lld\n", n, lcm_range(n));
    return 0;
}

