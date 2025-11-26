#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }
    
    // Count statistics
    while ((ch = fgetc(file)) != EOF) {
        chars++;
        
        if (ch == '\n') {
            lines++;
        }
        
        if (isspace(ch)) {
            in_word = 0;
        } else {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        }
    }
    
    // Count last line if file doesn't end with newline
    if (chars > 0) {
        lines++;
    }
    
    fclose(file);
    
    // Display results
    printf("\nFile Statistics:\n");
    printf("Characters: %d\n", chars);
    printf("Words:      %d\n", words);
    printf("Lines:      %d\n", lines);
    
    return 0;
}