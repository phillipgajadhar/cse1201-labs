#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;

    printf("Sum: %d\nDifference: %d\nProduct: %d\nQuotient: %.2f\n",
           sum, difference, product, quotient);

    return 0;
}
