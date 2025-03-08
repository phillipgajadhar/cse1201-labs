#include <stdio.h>

void printArray(int xs[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", xs[i]);
}

void mutateArray(int xs[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        xs[i] = xs[i] * 2;
}

void reverseArray(int xs[], int n)
{
    int i, temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = xs[i];
        xs[i] = xs[n - i - 1];
        xs[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {2, 3, 5, 7, 11};
    int n = 5, i, temp;

    printf("Array before: ");
    printArray(arr, n);
    printf("\n");

    //  mutation
    mutateArray(arr, n);
    printf("After mutation: ");
    printArray(arr, n);

    printf("\n");

    // reverse array
    reverseArray(arr, n);
    printf("After reversing: ");
    printArray(arr, n);

    printf("\n");
}