#include <stdio.h>

int main()
{
    int arr[] = {2, 3, 5, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Array before: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    for (int i = 0; i < n; i++)
        arr[i] *= 2;

    printf("After multiplication by 2: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("After reversing: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}