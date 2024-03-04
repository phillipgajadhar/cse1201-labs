#include <stdio.h>

int isVowel(char);

int main()
{
    char c;
    int vowels = 0, nonVowels = 0;

    while (1)
    {
        printf("Enter a letter:\n");
        scanf("%c", &c);
        getchar(); // remove trailing newline character in input stream

        if (c == '1')
            break;

        else if (isVowel(c))
            vowels++;
        
        else nonVowels++;
    }
    
    printf("Number of vowels: %d\n", vowels);
    printf("Number of non-vowels: %d\n", nonVowels);

    return 0;
}

int isVowel(char c)
{
    if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
        return 1;

    else
        return 0;
}