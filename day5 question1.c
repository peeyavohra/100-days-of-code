#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    // Input
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter rate of interest: ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100.0;

    // Compound Interest
    compoundInterest = principal * pow((1 + rate / 100.0), time) - principal;

    // Output
    printf("Simple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}

