#include <stdio.h>

int main()
{
    int x, y, sum, product; 
    float average;

    printf("Enter two numbers (separated by a space):");
    scanf("%d %d", &x, &y);
    
    sum = x + y;
    product = x * y;
    average = (float) sum / 2;

    printf("The sum of %d and %d is %d\n", x, y, sum);
    printf("The product of %d and %d is %d\n", x, y, product);
    printf("The average of %d and %d is %f\n", x, y, average);

    return 0;
}
