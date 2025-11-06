#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable (using + and -)
    a = a + b;
    b = a - b;
    a = a - b;

    // Output
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

