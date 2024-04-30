#include <stdio.h>

int countEven(int *, int);

int main(int argc, char const *argv[])
{
    int xs[6] = { 3, 1, 4, 1, 6, 9 };

    printf("Even = %d\n", countEven(xs, 6));

    return 0;
}

int countEven(int *arr, int n)
{
    int i, even = 0;
    
    for ( i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            even++;
    
    return even;
}
