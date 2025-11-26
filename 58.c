#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    // Input array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product except self
    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {   // skip the same index
                product *= nums[j];
            }
        }

        answer[i] = product;
    }

    // Print result
    printf("\nProduct Except Self:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}
