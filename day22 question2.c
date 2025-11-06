#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, num = 1, den = 2;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum = sum + (num / den);
        num = num + 2;
        den = den + 2;
    }
    printf("Sum = %.2f", sum);
    return 0;
}
