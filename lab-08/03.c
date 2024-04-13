#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buffer[256];
    int length = 0;

    printf("Enter string:");
    char *c = fgets(buffer, 256, stdin);

    // compute length of string
    while (*c != '\n' && *c++ != '\0')
        length++;

    // pointer to last character: Hello
    c = buffer + length - 1;

    while (1)
    {
        putchar(*c);

        if (c-- == buffer)
            break;
    }

    return 0;
}
