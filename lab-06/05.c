#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char src[256], dest[256], c;
    int i;

    printf("Enter string: ");
    fgets(src, 256, stdin);

    int length = strlen(src);

    printf("%d", length);
    
    for (i = 0; i < length; i++)
    {
        c = src[i];

        if (isalpha(c))
        {
            if (islower(c))
                dest[i] = toupper(c);
            else
                dest[i] = tolower(c);
            
        }

        else
            dest[i] = c;
        
    }

    printf("%s\n", dest);

    return 0;
}