#include <stdio.h>
#include <string.h>

// Define enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define Person struct with Gender
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

// Function to convert enum to string
const char* genderToString(enum Gender gender) {
    switch (gender) {
        case MALE: return "Male";
        case FEMALE: return "Female";
        case OTHER: return "Other";
        default: return "Unknown";
    }
}

// Function to print person details
void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s (%d)\n", genderToString(p.gender), p.gender);
    printf("----------------------------\n");
}

int main() {
    printf("=== Person Gender System ===\n\n");
    
    // Create person instances
    struct Person person1 = {"John Doe", 25, MALE};
    struct Person person2 = {"Jane Smith", 30, FEMALE};
    struct Person person3 = {"Alex Johnson", 22, OTHER};
    
    // Print person details
    printPerson(person1);
    printPerson(person2);
    printPerson(person3);
    
    return 0;
}