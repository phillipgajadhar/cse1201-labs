#include <stdio.h>

int add(int, int);
int multiply(int, int);
float quotient(int, int);

int main()
{
    int x, y, sum, product;
    float average;

    printf("Enter two numbers (separated by a space):");
    scanf("%d %d", &x, &y);

    sum = add(x, y);
    product = multiply(x, y);
    average = quotient(x, y);

    printf("The sum of %d and %d is %d\n", x, y, sum);
    printf("The product of %d and %d is %d\n", x, y, product);
    printf("The average of %d and %d is %f\n", x, y, average);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

float quotient(int a, int b)
{
    return (float) add(a, b) / 2;
}