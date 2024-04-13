#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buffer[256];
    int length = 0;

    printf("Enter string:");
    char *c = fgets(buffer, 256, stdin);

    while (*c != '\n' && *c++ != '\0')
        length++;

    printf("The length of the string is %d\n", length);

    return 0;
}
