#include <stdio.h>
int main() {
    int a[50], n, i, num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);
    printf("Enter number to insert: ");
    scanf("%d", &num);

    for(i=n; i>=pos; i--)
        a[i] = a[i-1];

    a[pos-1] = num;
    n++;

    printf("Array after insertion:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
