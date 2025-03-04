#include <stdio.h>

int isEven(int x)
{
    int rem = x % 2;
    if (rem == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("How many numbers would you like to enter:\n");
    scanf("%d", &n);

    int xs[n], i;

    for (i = 0; i < n; i++)
    {
        printf("Enter a (%d) number:\n", i + 1);
        scanf("%d", &xs[i]);
    }
    printf("The even numbers are:\n");
    for (i = 0; i < n; i++)
    {
        if (isEven(xs[i]))
            printf("%d\n", xs[i]);
    }
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += xs[i];

    printf("The sum is %d\n", sum);

    float avg;
    avg = (float)sum / n;
    printf("The avg is %.2f\n", avg);

    int min = xs[0];

    for (i = 1; i < n; i++)
    {
        if (xs[i] < min)
            min = xs[i];
    }

    printf("Min: %d\n", min);

    int max = xs[0];

    for (i = 1; i < n; i++)
    {
        if (xs[i] > max)
            max = xs[i];
    }

    printf("Max: %d\n", max);
}