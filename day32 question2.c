#include <stdio.h>

int main() {
    int n, rem, count[10] = {0}, i, max = 0, digit;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n != 0) {
        rem = n % 10;
        count[rem]++;
        n = n / 10;
    }
    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            digit = i;
        }
    }
    printf("Digit %d occurs most (%d times)", digit, max);
    return 0;
}
