#include <stdio.h>

int findRepeatedElement(int arr[], int n) {
    // Using Floyd's Tortoise and Hare (Cycle Detection) algorithm
    int slow = arr[0];
    int fast = arr[0];
    
    // Phase 1: Find the intersection point
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    
    // Phase 2: Find the entrance to the cycle (repeated element)
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    
    return slow;
}

int findRepeatedElementHash(int arr[], int n) {
    // Using visited array method
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            return arr[i];
        }
        visited[arr[i]] = 1;
    }
    return -1;
}

int main() {
    int n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers (one element repeated):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display array
    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Find repeated element using cycle detection
    int repeated1 = findRepeatedElement(arr, n);
    
    // Find repeated element using hash method
    int repeated2 = findRepeatedElementHash(arr, n);
    
    printf("Repeated element (cycle detection): %d\n", repeated1);
    printf("Repeated element (hash method): %d\n", repeated2);
    
    // Verification and analysis
    printf("\nVerification:\n");
    
    int frequency[n];
    for (int i = 0; i < n; i++) {
        frequency[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
    
    printf("Element | Frequency\n");
    printf("--------|----------\n");
    for (int i = 0; i < n; i++) {
        if (frequency[i] > 0) {
            printf("%7d | %9d", i, frequency[i]);
            if (frequency[i] > 1) {
                printf(" ← REPEATED");
            }
            printf("\n");
        }
    }
    
    // Show the cycle detection process
    printf("\nCycle Detection Process:\n");
    printf("Array indices and values:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    // Demonstrate the cycle
    printf("\nFollowing the cycle:\n");
    int current = arr[0];
    printf("Start at arr[0] = %d\n", current);
    
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", current, arr[current]);
        current = arr[current];
        if (current == repeated1) {
            printf("Cycle detected! Repeated element: %d\n", repeated1);
            break;
        }
    }
    
    return 0;
}