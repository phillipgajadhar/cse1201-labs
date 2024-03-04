#include <stdio.h>

int main()
{
    int i = 0, x;

    do
    {
        printf("Enter number:\n");
        scanf("%d", &x);

        printf("You've entered: %d\n", x);
    } while (++i < 10);

    return 0;
}
