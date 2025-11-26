#include <stdio.h>
#include <string.h>

// Define nested Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure with nested Date
struct Employee {
    char name[50];
    int emp_id;
    float salary;
    char department[30];
    struct Date joining_date;  // Nested structure
};

// Function to print employee details
void printEmployee(struct Employee emp) {
    printf("\n=== Employee Details ===\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Salary: $%.2f\n", emp.salary);
    printf("Department: %s\n", emp.department);
    printf("Joining Date: %02d/%02d/%d\n", 
           emp.joining_date.day, 
           emp.joining_date.month, 
           emp.joining_date.year);
}

int main() {
    // Create and initialize employee with nested structure
    struct Employee emp1 = {
        "John Smith",
        1001,
        75000.50,
        "Engineering",
        {15, 3, 2020}  // Nested structure initialization
    };
    
    printf("=== Employee Information System ===\n");
    printEmployee(emp1);
    
    return 0;
}