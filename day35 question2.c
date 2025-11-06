#include <stdio.h>
int main() {
    int a[50], n, k, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter number of rotations: ");
    scanf("%d", &k);

    for(j=0; j<k; j++) {
        temp = a[n-1];
        for(i=n-1; i>0; i--)
            a[i] = a[i-1];
        a[0] = temp;
    }

    printf("Array after rotation:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}
