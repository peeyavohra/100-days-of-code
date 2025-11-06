#include <stdio.h>

int main() {
    char op;
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);

    switch(op) {
        case '+': printf("Result = %d", a + b); break;
        case '-': printf("Result = %d", a - b); break;
        case '*': printf("Result = %d", a * b); break;
        case '/': printf("Result = %d", a / b); break;
        case '%': printf("Result = %d", a % b); break;
        default: printf("Invalid operator");
    }
    return 0;
}
