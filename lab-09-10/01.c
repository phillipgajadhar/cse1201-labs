#include <stdio.h>

void findAverage(int, int, float*);

int main(int argc, char const *argv[])
{
    int x, y, z;
    float average;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    int sum = x + y + z;

    findAverage(sum, 3, &average);

    printf("Average: %f\n", average);

    return 0;
}

void findAverage(int sum, int n, float* avg)
{
    *avg = (float) sum / n;
}