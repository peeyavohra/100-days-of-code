#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that returns structure with top student's details
struct Student findTopStudent(struct Student students[]) {
    struct Student topStudent = students[0]; // Assume first student is top
    
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    
    return topStudent; // Return the entire structure
}

// Function to print student details
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student students[NUM_STUDENTS] = {
        {"Alice Johnson", 101, 85.5},
        {"Bob Smith", 102, 92.0},
        {"Carol Davis", 103, 78.5},
        {"David Wilson", 104, 88.0},
        {"Eva Brown", 105, 95.5}
    };
    
    printf("=== Finding Top Student ===\n");
    
    // Call function that returns structure
    struct Student topStudent = findTopStudent(students);
    
    printf("\n🎉 TOP STUDENT 🎉\n");
    printf("=================\n");
    printStudent(topStudent);
    
    return 0;
}