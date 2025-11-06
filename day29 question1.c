#include <stdio.h>

int main() {
    int n, i, a[100], sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum = %d", sum);
    return 0;
}
