#include <stdio.h>

int main()
{
    int x = 30;
    int y = 70;

    int sum = x + y;
    int product = x * y;
    float average = (float) sum / 2;

    printf("The sum of %d and %d is %d\n", x, y, sum);
    printf("The product of %d and %d is %d\n", x, y, product);
    printf("The average of %d and %d is %f\n", x, y, average);

    return 0;
}
