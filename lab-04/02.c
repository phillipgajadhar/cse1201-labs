#include <stdio.h>

int main()
{
    int i, x;

    for (i = 0; i < 10; i++)
    {
        printf("Enter number:\n");
        scanf("%d", &x);

        printf("You've entered: %d\n", x);
    }
    

    return 0;
}
