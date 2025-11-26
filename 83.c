#include <stdio.h>

enum Month {
    JAN=1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    const char* months[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Month         Days\n");
    printf("------------------\n");
    
    for (enum Month m = JAN; m <= DEC; m++) {
        printf("%-12s %2d\n", months[m], days[m]);
    }
    
    return 0;
}