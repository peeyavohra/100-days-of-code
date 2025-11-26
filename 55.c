#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int count = 0;
    int majority = -1;
    for(int i = 0; i < n; i++) {
        count = 0;
        for(int j = 0; j < n; j++) {
            if(nums[i] == nums[j]) {
                count++;
            }
        }
        if(count > n / 2) {
            majority = nums[i];
            break;
        }
    }
    printf("Majority Element: %d\n", majority);
    return 0;
}