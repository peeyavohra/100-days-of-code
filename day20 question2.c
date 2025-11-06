#include <stdio.h>

int main() {
    long long n;
    int rem;
    printf("Enter binary number: ");
    scanf("%lld", &n);
    printf("1's Complement = ");
    while(n != 0) {
        rem = n % 10;
        if(rem == 0)
            printf("1");
        else
            printf("0");
        n = n / 10;
    }
    return 0;
}
