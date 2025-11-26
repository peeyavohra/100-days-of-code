#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    printf("Enter details of %d students:\n", n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find student with highest marks
    float max = s[0].marks;
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > max) {
            max = s[i].marks;
            index = i;
        }
    }

    // Print result
    printf("\n--- Student with Highest Marks ---\n");
    printf("Roll Number: %d\n", s[index].roll);
    printf("Name: %s\n", s[index].name);
    printf("Marks: %.2f\n", s[index].marks);

    return 0;
}