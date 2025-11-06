#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, last;

    printf("Enter full name: ");
    gets(name);

    last = -1;
    for (i = strlen(name) - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last = i + 1;
            break;
        }
    }

    // Print initials
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && i + 1 < last)
            printf("%c. ", name[i + 1]);
    }

    // Print surname
    printf("%s", &name[last]);
    return 0;
}
