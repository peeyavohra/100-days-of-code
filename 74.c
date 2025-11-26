#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char src_name[100], dest_name[100];
    char ch;
    int count = 0;
    
    printf("Source filename: ");
    scanf("%s", src_name);
    printf("Destination filename: ");
    scanf("%s", dest_name);
    
    src = fopen(src_name, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file '%s'\n", src_name);
        return 1;
    }
    
    dest = fopen(dest_name, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file '%s'\n", dest_name);
        fclose(src);
        return 1;
    }
    
    printf("Copying... ");
    
    // Copy character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
        count++;
    }
    
    fclose(src);
    fclose(dest);
    
    printf("Done!\n");
    printf("Copied %d characters from '%s' to '%s'\n", count, src_name, dest_name);
    
    return 0;
}