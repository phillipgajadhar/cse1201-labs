#include <stdio.h>

int main()
{
    int n, i, x;

    printf("How many number to enter:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter number:\n");
        scanf("%d", &x);

        printf("You've entered: %d\n", x);
    }
    

    return 0;
}
