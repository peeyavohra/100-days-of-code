#include <stdio.h>

int main() {
    char str[200];
    int i = 0, len = 0, max = 0, start = 0, word_start = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if(len > max) {
                max = len;
                word_start = start;
            }
            len = 0;
            start = i + 1;
        }
        i++;
    }

    if(len > max) {
        max = len;
        word_start = start;
    }

    printf("Longest word: ");
    for(i = word_start; i < word_start + max; i++)
        printf("%c", str[i]);

    return 0;
}
