#include <stdio.h>

int main() {
    char str[100], res[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
            res[j++] = ch;
    }
    res[j] = '\0';

    printf("String without vowels: %s", res);
    return 0;
}
