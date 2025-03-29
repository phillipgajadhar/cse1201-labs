#include <stdio.h>

#define SIZE 6

int *searchIntegers(int* arr, int n, int target)
{
    int i;

    for (i = 0; i < n; i++)
        if (*(arr + i) == target)
            return arr + i;

    return NULL;
}

int main(int argc, char const *argv[])
{
    int xs[SIZE] = {3, 1, 4, 1, 5, 9};
    int target = 4;

    int *found = searchIntegers(xs, SIZE, target);

    if (found == NULL)
        printf("%d is not found\n", target);

    else
        printf("%d found at %p\n", *found, found);
}
