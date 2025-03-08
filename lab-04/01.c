#include <stdio.h>

int isEven(int x)
{
    int rem = x % 2;
    if (rem == 0)
        return 1;
    else
        return 0;
}

void collectNumbers(int xs[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Enter a (%d) number:\n", i + 1);
        scanf("%d", &xs[i]);
    }
}

void printEvenNumbers(int xs[], int n)
{
    int i;

    printf("The even numbers are:\n");
    for (i = 0; i < n; i++)
    {
        if (isEven(xs[i]))
            printf("%d\n", xs[i]);
    }
}

int computeSum(int xs[], int n)
{
    int sum = 0, i;

    for (i = 0; i < n; i++)
    {
        sum += xs[i];
    }

    return sum;
}

int computeMin(int xs[], int n)
{
    int min = xs[0], i;
    for (i = 1; i < n; i++)
    {
        if (xs[i] < min)
            min = xs[i];
    }
    return min;
}
int computeMax(int xs[], int n)
{
    int max = xs[0], i;
    for (i = 1; i < n; i++)
    {
        if (xs[i] > max)
            max = xs[i];
    }
    return max;
}

float computeAverage(int xs[], int n)
{
    return (float)computeSum(xs, n) / n;
}

int main()
{
    int n;

    printf("How many numbers would you like to enter:\n");
    scanf("%d", &n);

    int xs[n], i;

    collectNumbers(xs, n);
    printEvenNumbers(xs, n);

    printf("The sum is %d\n", computeSum(xs, n));
    printf("The avg is %.2f\n", computeAverage(xs, n));

    printf("Min: %d\n", computeMin(xs, n));
    printf("Max: %d\n", computeMax(xs, n));
}