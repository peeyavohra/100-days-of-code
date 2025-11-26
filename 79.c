#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int number, sum = 0, count = 0;
    double average;
    
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }
    
    printf("Reading numbers from numbers.txt...\n");
    printf("Numbers: ");
    
    while (fscanf(file, "%d", &number) == 1) {
        printf("%d ", number);
        sum += number;
        count++;
    }
    
    fclose(file);
    
    if (count > 0) {
        average = (double)sum / count;
        printf("\n\nResults:\n");
        printf("Total numbers: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("\nNo numbers found in the file.\n");
    }
    
    return 0;
}