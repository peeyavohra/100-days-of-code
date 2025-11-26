#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    // Method 1: Using sum formula
    int total_sum = n * (n + 1) / 2;
    int array_sum = 0;
    
    for (int i = 0; i < n; i++) {
        array_sum += arr[i];
    }
    
    return total_sum - array_sum;
}

int findMissingNumberXOR(int arr[], int n) {
    // Method 2: Using XOR (avoids integer overflow)
    int xor_total = 0;
    int xor_array = 0;
    
    // XOR all numbers from 0 to n
    for (int i = 0; i <= n; i++) {
        xor_total ^= i;
    }
    
    // XOR all elements in array
    for (int i = 0; i < n; i++) {
        xor_array ^= arr[i];
    }
    
    return xor_total ^ xor_array;
}

int main() {
    int n;
    
    printf("Enter the value of n (array will contain 0 to n with one missing): ");
    scanf("%d", &n);
    
    // Array size is n (since one number is missing from 0 to n)
    int arr[n];
    
    printf("Enter %d integers between 0 to %d (one number missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display the array
    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Find missing number using sum method
    int missing_sum = findMissingNumber(arr, n);
    
    // Find missing number using XOR method
    int missing_xor = findMissingNumberXOR(arr, n);
    
    printf("Missing number (using sum method): %d\n", missing_sum);
    printf("Missing number (using XOR method): %d\n", missing_xor);
    
    // Verification and analysis
    printf("\nVerification:\n");
    printf("Expected numbers: 0 to %d\n", n);
    printf("Numbers present in array:\n");
    
    int present[n + 1]; // Track which numbers are present
    for (int i = 0; i <= n; i++) {
        present[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] <= n) {
            present[arr[i]] = 1;
        }
    }
    
    printf("Present: ");
    for (int i = 0; i <= n; i++) {
        if (present[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    printf("Missing: ");
    for (int i = 0; i <= n; i++) {
        if (!present[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    // Show calculation for sum method
    printf("\nSum Method Calculation:\n");
    int total = 0;
    printf("Sum of 0 to %d = %d\n", n, n * (n + 1) / 2);
    
    printf("Sum of array = ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" + ");
        total += arr[i];
    }
    printf(" = %d\n", total);
    
    printf("Missing number = %d - %d = %d\n", n * (n + 1) / 2, total, missing_sum);
    
    return 0;
}