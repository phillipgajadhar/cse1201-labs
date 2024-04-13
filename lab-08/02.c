#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buffer[256];
    char search;
    int occurrences = 0;

    printf("Enter string:\n");
    char *c = fgets(buffer, 256, stdin);

    printf("Enter search character:\n");
    search = getchar();

    while (*c != '\n' && *c != '\0')
        if(*c++ == search)
            occurrences++;

    printf("Character '%c' occurred %d times\n", search, occurrences);

    return 0;
}
