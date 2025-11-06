#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c) {
        printf("Matrix is not square, so it can't be symmetric.");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            if(a[i][j] != a[j][i])
                flag = 0;

    if(flag)
        printf("Matrix is symmetric.");
    else
        printf("Matrix is not symmetric.");

    return 0;
}
