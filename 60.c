#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    printf("\nMaximum elements of each subarray of size %d:\n", k);

    // Loop through each window of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Find max in current window
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        // Print maximum for this window
        printf("%d ", max);
    }

    return 0;
}
