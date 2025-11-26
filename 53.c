#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int totalSum = 0;
    for(int i = 0; i < n; i++){
        totalSum += arr[i];
    }
    int leftSum = 0;
    int pivotIndex = -1;
    for(int i = 0; i < n; i++){
        totalSum -= arr[i];
        if(leftSum == totalSum){
            pivotIndex = i;
            break;
        }
        leftSum += arr[i];
    }
    printf("%d\n", pivotIndex);
    
    return 0;
}