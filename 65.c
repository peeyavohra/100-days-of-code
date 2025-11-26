#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CHAR_SIZE 26

int areAnagrams(char* s, char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    // If lengths are different, they can't be anagrams
    if (len_s != len_t) {
        return 0;
    }
    
    int count[CHAR_SIZE] = {0};
    
    // Count frequency of characters in first string
    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
    }
    
    // Decrement frequency for characters in second string
    for (int i = 0; i < len_t; i++) {
        count[t[i] - 'a']--;
    }
    
    // Check if all counts are zero
    for (int i = 0; i < CHAR_SIZE; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char s[1000], t[1000];
    
    printf("Enter first string (lowercase): ");
    scanf("%s", s);
    
    printf("Enter second string (lowercase): ");
    scanf("%s", t);
    
    // Convert to lowercase (in case user enters uppercase)
    for (int i = 0; s[i]; i++) {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; t[i]; i++) {
        t[i] = tolower(t[i]);
    }
    
    printf("\nString 1: \"%s\" (length: %lu)\n", s, strlen(s));
    printf("String 2: \"%s\" (length: %lu)\n", t, strlen(t));
    
    if (areAnagrams(s, t)) {
        printf("\nResult: Anagram ✓\n");
    } else {
        printf("\nResult: Not Anagram ✗\n");
    }
    
    // Display character frequency analysis
    printf("\nCharacter Frequency Analysis:\n");
    printf("Char | String 1 | String 2 | Status\n");
    printf("-----|-----------|-----------|--------\n");
    
    int count_s[CHAR_SIZE] = {0};
    int count_t[CHAR_SIZE] = {0};
    
    // Count frequencies
    for (int i = 0; s[i]; i++) {
        count_s[s[i] - 'a']++;
    }
    for (int i = 0; t[i]; i++) {
        count_t[t[i] - 'a']++;
    }
    
    // Display frequency table
    for (int i = 0; i < CHAR_SIZE; i++) {
        if (count_s[i] > 0 || count_t[i] > 0) {
            char ch = 'a' + i;
            printf("  %c  |    %2d     |    %2d     |", ch, count_s[i], count_t[i]);
            
            if (count_s[i] == count_t[i]) {
                printf(" ✓ Match\n");
            } else {
                printf(" ✗ Mismatch\n");
            }
        }
    }
    
    // Check if strings can be rearranged to form each other
    printf("\nRearrangement Check:\n");
    
    char temp_s[1000], temp_t[1000];
    strcpy(temp_s, s);
    strcpy(temp_t, t);
    
    // Sort both strings (bubble sort for simplicity)
    int len_s = strlen(temp_s);
    int len_t = strlen(temp_t);
    
    for (int i = 0; i < len_s - 1; i++) {
        for (int j = 0; j < len_s - i - 1; j++) {
            if (temp_s[j] > temp_s[j + 1]) {
                char temp = temp_s[j];
                temp_s[j] = temp_s[j + 1];
                temp_s[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < len_t - 1; i++) {
        for (int j = 0; j < len_t - i - 1; j++) {
            if (temp_t[j] > temp_t[j + 1]) {
                char temp = temp_t[j];
                temp_t[j] = temp_t[j + 1];
                temp_t[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted string 1: \"%s\"\n", temp_s);
    printf("Sorted string 2: \"%s\"\n", temp_t);
    
    if (strcmp(temp_s, temp_t) == 0) {
        printf("Sorted strings are identical → ANAGRAMS\n");
    } else {
        printf("Sorted strings are different → NOT ANAGRAMS\n");
    }
    
    return 0;
}