#include <stdio.h>

enum Week {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Week days[] = {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
    char *names[] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};

    int size = 7;

    printf("Enum names and values:\n");

    for (int i = 0; i < size; i++) {
        printf("%s = %d\n", names[i], days[i]);
    }

    return 0;
}