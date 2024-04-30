#include <stdio.h>
#include <stdlib.h>

int countEven(int *, int);

int main(int argc, char const *argv[])
{
    int n;

    // prompt user for input size
    scanf("%d", &n);

    int* xs = (int *) malloc(n * sizeof(int));
    int i;

    for (i = 0; i < n; i++)
        scanf("%d", xs + i);


    for (i = 0; i < n; i++)
        printf("%d ", xs[i]);
    

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
