#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;
    
    // Open files
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }
    
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(input);
        return 1;
    }
    
    printf("Converting input.txt to output.txt...\n");
    
    // Convert and copy
    while ((ch = fgetc(input)) != EOF) {
        if (islower(ch)) {
            fputc(toupper(ch), output);
        } else {
            fputc(ch, output);
        }
    }
    
    // Close files
    fclose(input);
    fclose(output);
    
    printf("Conversion completed successfully!\n");
    
    return 0;
}