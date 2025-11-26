#include<stdio.h>
int main(){
    int n, x;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the sorted array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int ceilIndex = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] >= x){
            ceilIndex = i;
            break;
        }
    }
    printf("%d\n", ceilIndex);
    
    return 0;
}