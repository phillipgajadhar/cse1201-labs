#include <stdio.h>

char toLower(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');

    return c;
}


int main(int argc, char const *argv[])
{
    char str[] = "Pointers and Pointer Arithmetic";
    char* strPtr = str;

    while (*strPtr != '\0')
    {
        *strPtr = toLower(*strPtr);
        strPtr++;
    }
    

    printf("%s\n", str);

    return 0;
}
