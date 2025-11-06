#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input
    printf("Enter a character: ");
    scanf(" %c", &ch);   // space before %c to skip whitespace

    // Convert to lowercase for simplicity
    ch = tolower(ch);

    // Check vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a Vowel\n", ch);
    } else if ((ch >= 'a' && ch <= 'z')) {
        printf("%c is a Consonant\n", ch);
    } else {
        printf("%c is not an alphabet character\n", ch);
    }

    return 0;
}

