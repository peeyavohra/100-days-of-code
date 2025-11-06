#include <stdio.h>

int main() {
    float cp, sp, profit, loss;

    // Input
    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        profit = sp - cp;
        printf("Profit Percentage = %.2f%%\n", (profit / cp) * 100);
    } else if (sp < cp) {
        loss = cp - sp;
        printf("Loss Percentage = %.2f%%\n", (loss / cp) * 100);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}

