#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}, i, found = 0;

    printf("Enter a lowercase string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if(freq[index] == 2) {
            printf("First repeating character: %c", str[i]);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("No repeating character found.");

    return 0;
}
