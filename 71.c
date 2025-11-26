#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char name[100];
    int age;
    
    // Create and open file in write mode
    file = fopen("info.txt", "w");
    
    // Check if file was created successfully
    if (file == NULL) {
        printf("Error: Could not create file info.txt\n");
        return 1;
    }
    
    printf("=== File Creation Program ===\n\n");
    
    // Get user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove newline character from name
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Validate age
    if (age < 0 || age > 150) {
        printf("Error: Please enter a valid age (0-150)\n");
        fclose(file);
        return 1;
    }
    
    // Write data to file using fprintf
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "----------------------------\n");
    
    // Close the file
    fclose(file);
    
    printf("\n✅ Data successfully saved to info.txt!\n");
    
    // Display what was written to the file
    printf("\nData written to file:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    
    // Optional: Read and display file contents to verify
    printf("\n--- Verifying file contents ---\n");
    file = fopen("info.txt", "r");
    
    if (file != NULL) {
        char ch;
        printf("File contents:\n");
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }
        fclose(file);
    } else {
        printf("Could not open file for reading verification.\n");
    }
    
    return 0;
}