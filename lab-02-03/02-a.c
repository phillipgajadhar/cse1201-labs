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

    if (x == 2)
        printf("Month %d has 28 (and sometimes 29) days.\n", x);
    
    else if (x == 4 || x == 6 || x == 9 || x == 11)
        printf("Month %d has 30 days.\n", x);
 
    else
        printf("Month %d has 31 days.\n", x);
        

    return 0;
}
