#include <stdio.h>

int main()
{
    char c;

    printf("Enter a letter:\n");
    scanf("%c", &c);

    if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
        printf("Letter is a vowel\n");

    else
        printf("Letter is a consonant\n");

    return 0;
}
