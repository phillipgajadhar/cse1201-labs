#include <stdio.h>

int main()
{
    int x;

    printf("Please enter day of the week (1-7):\n");
    scanf("%d", &x);

    if (x == 1)
        printf("Sunday\n");

    else if (x == 2)
        printf("Monday\n");

    else if (x == 3)
        printf("Tuesday\n");

    else if (x == 4)
        printf("Wednesday\n");

    else if (x == 5)
        printf("Thursday\n");

    else if (x == 6)
        printf("Friday\n");

    else if (x == 7)
        printf("Saturday\n");
    
    else
        printf("Invalid input.\n");

    return 0;
}
