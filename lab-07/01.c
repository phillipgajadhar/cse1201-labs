#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int *copyArray(int *, int);

int main(int argc, char const *argv[])
{
    int source[SIZE] = {3, 1, 4, 1, 5, 9};

    int *copy = copyArray(source, SIZE);

    int i;

    for (i = 0; i < SIZE; i++)
        printf("%d ", copy[i]);
    

    return 0;
}

int *copyArray(int *source, int size)
{
    int *dest = (int*) malloc(size * sizeof(int));
    int i;

    for (i = 0; i < size; i++)
        dest[i] = source[i];
        
    return dest;
}