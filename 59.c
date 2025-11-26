#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int maxSum = -1000000;  // a very small number

    // Loop to find the maximum sum of all subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;

        // Calculate sum of subarray starting at index i
        for (int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }

        // Update maxSum if needed
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("\nMaximum sum of subarrays of size %d is: %d\n", k, maxSum);

    return 0;
}