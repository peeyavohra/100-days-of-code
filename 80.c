#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;
    
    // Write records
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("File error!\n");
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: "); scanf("%s", s.name);
        printf("Roll: "); scanf("%d", &s.roll);
        printf("Marks: "); scanf("%f", &s.marks);
        
        fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(file);
    
    printf("\nRecords saved!\n");
    
    // Read and display records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("File error!\n");
        return 1;
    }
    
    printf("\nReading records:\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("----------------------------\n");
    
    while (fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("%s\t\t%d\t%.2f\n", s.name, s.roll, s.marks);
    }
    
    fclose(file);
    return 0;
}