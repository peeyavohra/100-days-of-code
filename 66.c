#include <stdio.h>
#include <stdlib.h>

// Structure to store element value and its original index
typedef struct {
    int value;
    int index;
} Element;

// Comparison function for sorting
int compare(const void *a, const void *b) {
    return ((Element*)a)->value - ((Element*)b)->value;
}

void findTwoSum(int nums[], int n, int target) {
    // Create array of elements with their original indices
    Element elements[n];
    for (int i = 0; i < n; i++) {
        elements[i].value = nums[i];
        elements[i].index = i;
    }
    
    // Sort the elements by value
    qsort(elements, n, sizeof(Element), compare);
    
    // Use two pointers approach
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        int sum = elements[left].value + elements[right].value;
        
        if (sum == target) {
            // Found the pair
            printf("%d %d\n", elements[left].index, elements[right].index);
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    
    // No solution found
    printf("-1 -1\n");
}

int main() {
    int n, target;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter %d positive integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target sum: ");
    scanf("%d", &target);
    
    // Display array
    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nTarget: %d\n", target);
    
    printf("Indices: ");
    findTwoSum(nums, n, target);
    
    // Verification and detailed output
    printf("\nDetailed Analysis:\n");
    printf("Index | Value\n");
    printf("------|------\n");
    for (int i = 0; i < n; i++) {
        printf("%5d | %5d\n", i, nums[i]);
    }
    
    // Find and display the actual pair
    printf("\nSearching for pairs that sum to %d:\n", target);
    int found = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Found: nums[%d] + nums[%d] = %d + %d = %d\n", 
                       i, j, nums[i], nums[j], target);
                found = 1;
            }
        }
    }
    
    if (!found) {
        printf("No pair found that sums to %d\n", target);
    }
    
    return 0;
}