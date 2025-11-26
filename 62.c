#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    // Kadane's algorithm
    for (int i = 1; i < n; i++) {

        // Either add current element or start new subarray from this element
        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }

        // Update maximum sum so far
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("\nMaximum Subarray Sum = %d\n", maxSum);

    return 0;
}
