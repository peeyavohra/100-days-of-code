#include <stdio.h>

// Simple enum definition
enum WeekDays {
    SUNDAY,
    MONDAY, 
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Array to store day names
    const char* day_names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };
    
    printf("Days of the Week with Integer Values:\n");
    printf("-------------------------------------\n");
    
    // Print all days with their values
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%-10s = %d\n", day_names[i], i);
    }
    
    return 0;
}