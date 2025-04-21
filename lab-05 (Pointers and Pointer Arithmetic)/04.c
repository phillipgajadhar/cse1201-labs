#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void *a, void *b, int size);

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swap: x = %d, y = %d\n", x, y);

    float p = 1.23, q = 4.56;
    printf("Before swap: p = %.2f, q = %.2f\n", p, q);
    swap(&p, &q, sizeof(float));
    printf("After swap: p = %.2f, q = %.2f\n", p, q);

    return 0;
}

void swap(void *a, void *b, int size) {
    void *temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}