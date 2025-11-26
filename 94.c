#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure as parameter and prints its members
void printStudent(struct Student s) {
    printf("\n=== Student Information ===\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student1;
    
    // Initialize student data
    strcpy(student1.name, "John Doe");
    student1.roll_no = 101;
    student1.marks = 85.5;
    
    // Call function with structure as parameter
    printStudent(student1);
    
    return 0;
}