#include <stdio.h>

int main() {
    int n, i, a[100];
    int pos = 0, neg = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > 0)
            pos++;
        else if(a[i] < 0)
            neg++;
        else
            zero++;
    }
    printf("Positive = %d, Negative = %d, Zero = %d", pos, neg, zero);
    return 0;
}
