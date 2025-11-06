#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Main diagonal elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i][i]);

    printf("\nSecondary diagonal elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i][n - i - 1]);

    return 0;
}
