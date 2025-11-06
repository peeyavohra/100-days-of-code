#include <stdio.h>

int main() {
    char str[200];
    int i, space = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            space++;
        else if(str[i] >= '0' && str[i] <= '9')
            digit++;
        else if(!((str[i] >= 'a' && str[i] <= 'z') ||
                  (str[i] >= 'A' && str[i] <= 'Z')))
            special++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d", space, digit, special);
    return 0;
}
