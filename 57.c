#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nPrevious Greater Elements:\n");

    // Finding previous greater element for each element
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Look to the left of arr[i]
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;   // nearest greater on left found
            }
        }

        printf("%d -> %d\n", arr[i], prevGreater);
    }

    return 0;
}
