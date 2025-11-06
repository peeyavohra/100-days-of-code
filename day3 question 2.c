#include <stdio.h>

int main() {
    int a, b, temp;

    // Input
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // Output
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

