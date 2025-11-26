#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error: File '%s' not found!\n", filename);
        return 1;
    }
    
    printf("File '%s' exists. Content:\n", filename);
    printf("------------------------\n");
    
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    printf("------------------------\n");
    
    fclose(file);
    return 0;
}