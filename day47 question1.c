#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++)
        if(str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;

    for(i = 0; str2[i] != '\0'; i++)
        if(str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i])
            flag = 0;
    }

    if(flag)
        printf("Strings are anagrams.");
    else
        printf("Strings are not anagrams.");

    return 0;
}
