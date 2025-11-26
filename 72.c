#include <stdio.h>

int main() {
    FILE *f;
    char line[100];
    
    f = fopen("info.txt", "r");
    
    if (f == NULL) {
        printf("File not found!\n");
        return 1;
    }
    
    while (fgets(line, sizeof(line), f) != NULL) {
        printf("%s", line);
    }
    
    fclose(f);
    return 0;
}