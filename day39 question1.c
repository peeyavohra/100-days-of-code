#include <stdio.h>

int main() {
    int a[10][10], r, i, j, k, flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &r);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < r; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++) {
        for(k = i + 1; k < r; k++) {
            if(a[i][i] == a[k][k])
                flag = 0;
        }
    }

    if(flag)
        printf("Diagonal elements are distinct.");
    else
        printf("Diagonal elements are not distinct.");

    return 0;
}
