#include <stdio.h>

void printIntArray(int arr[], int n);
void multiplyArrayByTwo(int arr[], int n);
void reverseArray(int arr[], int n);

int main()
{
    int arr[] = {2, 3, 5, 7, 11};
    int n = sizeof(arr) / sizeof(int);

    printf("Array before: ");
    printIntArray(arr, n);

    multiplyArrayByTwo(arr, n);

    printf("After multiplication by 2: ");
    printIntArray(arr, n);

    reverseArray(arr, n);

    printf("After reversing: ");
    printIntArray(arr, n);
}

void printIntArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void multiplyArrayByTwo(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] *= 2;
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}