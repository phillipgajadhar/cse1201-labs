#include <stdio.h>


int main(int argc, char const *argv[])
{
    const int SIZE = 6;

    int src[] = { 3, 1, 4, 1, 5, 9 };
    int dest[SIZE];

    //  copy elements from src to dest in reverse order using pointer(s)
    int *srcPtr = src + SIZE - 1;
    int *destPtr = dest;

    while (srcPtr >= src)
        *destPtr++ = *srcPtr--;
    

    // print dest
    int i;

    for (i = 0; i < SIZE; i++)
        printf("%d ", dest[i]);

    printf("\n");    

    return 0;
}
