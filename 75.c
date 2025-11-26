#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char text[1000];
    
    printf("Enter filename to append to: ");
    scanf("%99s", filename);
    
    // Open file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }
    
    // Clear input buffer
    while (getchar() != '\n');
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    // Append text to file
    fprintf(file, "%s", text);
    
    fclose(file);
    
    printf("Text successfully appended to '%s'\n", filename);
    
    return 0;
}