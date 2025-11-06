#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;
    printf("Enter number: ");
    scanf("%d", &n);
    last = n % 10;
    digits = (int)log10(n);
    first = n / pow(10, digits);
    swapped = last * pow(10, digits) + (n % (int)pow(10, digits) - n % 10) + first;
    printf("After swapping = %d", swapped);
    return 0;
}
