#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[len] != '\0')
        len++;

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1])
            flag = 0;
    }

    if(flag)
        printf("String is a palindrome.");
    else
        printf("String is not a palindrome.");

    return 0;
}
