#include <stdio.h>

int main()
{
    int lower, upper;

    printf("Enter the lower bound:\n");
    scanf("%d", &lower);

    printf("Enter the upper bound:\n");
    scanf("%d", &upper);

    printf("Numbers in the range [%d, %d]:\n", lower, upper);
   
    for (int i = lower; i <= upper; i++)
        printf("%d ", i);

    printf("\n");

    return 0;
}
