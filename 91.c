#include <stdio.h>

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student student;
    
    printf("=== Student Information System ===\n\n");
    
    // Read student data
    printf("Enter student details:\n");
    
    printf("Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    printf("Roll Number: ");
    scanf("%d", &student.roll_no);
    
    printf("Marks: ");
    scanf("%f", &student.marks);
    
    // Print student data
    printf("\n=== Student Record ===\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);
    
    return 0;
}