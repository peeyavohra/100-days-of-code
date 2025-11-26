#include <stdio.h>

// Define enum for user roles
enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

// Function to display role menu
void displayRoleMenu() {
    printf("\n=== User Role Selection ===\n");
    printf("%d. Administrator\n", ADMIN);
    printf("%d. Regular User\n", USER);
    printf("%d. Guest\n", GUEST);
    printf("Select your role: ");
}

// Function to display message based on role
void displayRoleMessage(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("\n=== Welcome Administrator ===\n");
            printf("You have full system access.\n");
            printf("Permissions: Read, Write, Execute, Delete, Manage Users\n");
            printf("You can modify system settings and user accounts.\n");
            break;
            
        case USER:
            printf("\n=== Welcome User ===\n");
            printf("You have standard user access.\n");
            printf("Permissions: Read, Write, Execute\n");
            printf("You can use applications and save your work.\n");
            break;
            
        case GUEST:
            printf("\n=== Welcome Guest ===\n");
            printf("You have limited access.\n");
            printf("Permissions: Read only\n");
            printf("You can view content but cannot make changes.\n");
            break;
            
        default:
            printf("Error: Unknown user role!\n");
            break;
    }
}

int main() {
    enum UserRole role;
    int continueProgram = 1;
    
    printf("=== User Role System ===\n");
    
    while (continueProgram) {
        displayRoleMenu();
        scanf("%d", (int*)&role);
        
        // Clear input buffer
        while (getchar() != '\n');
        
        // Display message based on selected role
        displayRoleMessage(role);
        
        // Ask if user wants to continue
        printf("\nDo you want to check another role? (1 for Yes, 0 for No): ");
        scanf("%d", &continueProgram);
        
        // Clear input buffer
        while (getchar() != '\n');
    }
    
    printf("\nThank you for using the User Role System!\n");
    return 0;
}