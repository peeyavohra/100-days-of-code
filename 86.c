#include <stdio.h>

// Define enum for menu choices
enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    EXIT
};

int main() {
    enum MenuChoice choice;
    double num1, num2, result;
    
    printf("Simple Calculator Program\n");
    
    do {
        // Display menu
        printf("\n=== Calculator Menu ===\n");
        printf("%d. Add\n", ADD);
        printf("%d. Subtract\n", SUBTRACT);
        printf("%d. Multiply\n", MULTIPLY);
        printf("%d. Exit\n", EXIT);
        printf("Enter your choice: ");
        
        scanf("%d", (int*)&choice);
        
        // Clear input buffer
        while (getchar() != '\n');
        
        if (choice == EXIT) {
            printf("Goodbye!\n");
            break;
        }
        
        if (choice >= ADD && choice <= MULTIPLY) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            
            // Clear input buffer
            while (getchar() != '\n');
        }
        
        // Switch statement for operations
        switch (choice) {
            case ADD:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case SUBTRACT:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case MULTIPLY:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
        
    } while (choice != EXIT);
    
    return 0;
}