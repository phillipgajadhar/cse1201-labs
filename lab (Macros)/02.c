#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 64

int main()
{
    char firstName[BUFFER_SIZE];

    printf("Enter first name:\n");
    scanf("%s", firstName);

    printf("Your first name is: %s\n", firstName);
    printf("%s has %d characters\n", firstName, (int)strlen(firstName));

    return 0;
}
