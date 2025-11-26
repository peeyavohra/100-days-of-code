#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toSentenceCase(char str[]) {
    int newSentence = 1;
    
    for (int i = 0; str[i]; i++) {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } else if (isalpha(str[i])) {
            str[i] = tolower(str[i]);
        }
        
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = 1;
        }
    }
}

int main() {
    char str[1000];
    
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline
    
    printf("Original: %s\n", str);
    toSentenceCase(str);
    printf("Sentence case: %s\n", str);
    
    return 0;
}