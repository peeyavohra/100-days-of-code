#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");   // open file in read mode

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;   // exit the program
    }

    while ((ch = fgetc(fp)) != EOF) {

        // Convert lowercase letters if needed
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;  // convert to lowercase
        }

        // Check vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check consonants: any letter that is not vowel
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
        // ignore digits, spaces, special characters
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}