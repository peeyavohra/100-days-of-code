#include <stdio.h>
int main() {
    int a[50], n, i, num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &num);

    for(i=0; i<n; i++) {
        if(num < a[i]) {
            pos = i;
            break;
        }
    }
    if(i == n) pos = n; // insert at end

    for(i=n; i>pos; i--)
        a[i] = a[i-1];

    a[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
