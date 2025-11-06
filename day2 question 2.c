#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Input
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output
    printf("Area of circle: %.2f\n", area);
    printf("Circumference of circle: %.2f\n", circumference);

    return 0;
}

