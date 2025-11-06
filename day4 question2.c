#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Method 1: Using loop
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers (using loop) = %d\n", n, sum);

    // Method 2: Using formula
    int formulaSum = n * (n + 1) / 2;
    printf("Sum of first %d natural numbers (using formula) = %d\n", n, formulaSum);

    return 0;
}


