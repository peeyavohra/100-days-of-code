#include <stdio.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;
    
    // Merge both arrays while both have elements
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    // Copy remaining elements from arr1
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    
    // Copy remaining elements from arr2
    while (j < n) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int m, n;
    
    printf("Enter size of first array: ");
    scanf("%d", &m);
    
    int arr1[m];
    printf("Enter %d sorted elements for first array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &n);
    
    int arr2[n];
    printf("Enter %d sorted elements for second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int merged[m + n];
    
    // Display original arrays
    printf("\nFirst array:  ");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nSecond array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    // Merge arrays
    mergeSortedArrays(arr1, m, arr2, n, merged);
    
    // Display merged array
    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    // Display detailed merging process
    printf("\nMerging Process:\n");
    printf("Step | Array1 | Array2 | Merged\n");
    printf("-----|--------|--------|-------\n");
    
    int i = 0, j = 0, k = 0;
    int temp_merged[m + n];
    
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            temp_merged[k] = arr1[i];
            printf("%4d |   %3d  |        |  %3d\n", k + 1, arr1[i], temp_merged[k]);
            i++;
        } else {
            temp_merged[k] = arr2[j];
            printf("%4d |        |   %3d  |  %3d\n", k + 1, arr2[j], temp_merged[k]);
            j++;
        }
        k++;
    }
    
    while (i < m) {
        temp_merged[k] = arr1[i];
        printf("%4d |   %3d  |        |  %3d\n", k + 1, arr1[i], temp_merged[k]);
        i++;
        k++;
    }
    
    while (j < n) {
        temp_merged[k] = arr2[j];
        printf("%4d |        |   %3d  |  %3d\n", k + 1, arr2[j], temp_merged[k]);
        j++;
        k++;
    }
    
    return 0;
}