#include <stdio.h>

// Enum that behaves exactly like integers
enum Numbers {
    ZERO,
    ONE,
    TWO,
    THREE,
    TEN = 10,
    TWENTY = 20
};

// Function that accepts either enum or integer
void printValue(int value) {
    printf("Received value: %d\n", value);
}

int main() {
    printf("=== Enum-Integer Equivalence Proof ===\n\n");
    
    // Proof 1: Enums can be used in integer expressions
    enum Numbers num = TWO;
    int regularInt = 2;
    
    printf("Proof 1: Basic equivalence\n");
    printf("enum TWO = %d, int = %d\n", num, regularInt);
    printf("Are they equal? %s\n\n", num == regularInt ? "YES" : "NO");
    
    // Proof 2: Enums work in mathematical operations
    printf("Proof 2: Mathematical operations\n");
    printf("TWO + THREE = %d + %d = %d\n", TWO, THREE, TWO + THREE);
    printf("TEN * 2 = %d * 2 = %d\n\n", TEN, TEN * 2);
    
    // Proof 3: Enums can be used as array indices
    printf("Proof 3: Array indexing\n");
    int array[] = {100, 200, 300, 400};
    printf("array[ZERO] = %d\n", array[ZERO]);
    printf("array[THREE] = %d\n\n", array[THREE]);
    
    // Proof 4: Function parameter interchangeability
    printf("Proof 4: Function parameters\n");
    printf("Passing enum to function expecting int: ");
    printValue(ONE);
    
    printf("Passing int to function: ");
    printValue(5);
    
    // Proof 5: Switch statement usage
    printf("\nProof 5: Switch statements\n");
    enum Numbers test = TEN;
    
    switch (test) {
        case 10:  // Using integer literal
            printf("Case 10 matched for enum TEN\n");
            break;
        case TWENTY:  // Using enum constant
            printf("Case TWENTY matched\n");
            break;
        default:
            printf("Default case\n");
    }
    
    // Proof 6: Direct assignment between enum and int
    printf("\nProof 6: Direct assignment\n");
    enum Numbers fromInt = 15;  // Direct integer assignment
    int fromEnum = THREE;       // Direct enum assignment
    
    printf("Enum variable assigned from int 15: %d\n", fromInt);
    printf("Int variable assigned from enum THREE: %d\n", fromEnum);
    
    return 0;
}