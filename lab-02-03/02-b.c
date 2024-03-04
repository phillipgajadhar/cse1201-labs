#include <stdio.h>

int main()
{
    int x;

    printf("Please enter month of the year (1-12):\n");
    scanf("%d", &x);

    if (x < 1 || x > 12)
    {
        printf("Invalid month.\n");
        return -1; // indicate program exited with error
    }
    
    switch (x)
    {
    case 2:
        printf("Month %d has 28 (and sometimes 29) days.\n", x);
        break;

    case 4: case 6: case 9: case 11:
        printf("Month %d has 30 days.\n", x);
        break;

    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("Month %d has 31 days.\n", x);
        break;

    default:
        break;

    }

    return 0;
}
