#include <stdio.h>

int main()
{
    int n, i, x, incorrectCount = 0;

    printf("How many number to enter:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        while (1)
        {
            printf("Enter number:\n");
            scanf("%d", &x);

            // valid number; break from loop
            if (x >= 0 && x <= 20)
                break;

            // invalid number
            else {
                printf("Invalid number - enter number between 0-20\n");
                incorrectCount++;
            }
        }

        printf("You've entered: %d\n", x);
    }

    printf("%d incorrect numbers entered\n", incorrectCount);

    return 0;
}
