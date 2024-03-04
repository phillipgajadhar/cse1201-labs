#include <stdio.h>

int main()
{
    int i = 0, x;

    while (i++ < 10)
    {
        printf("Enter number:\n");
        scanf("%d", &x);

        printf("You've entered: %d\n", x);
    }

    return 0;
}
