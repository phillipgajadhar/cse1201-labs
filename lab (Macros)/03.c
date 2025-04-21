#include <stdio.h>

// SQUARE(x) macro
#define SQUARE(x) ((x) * (x))

// ISEQUAL(x, y) macro
#define ISEQUAL(x, y) ((x) == (y) ? 1 : 0)

int main() {
    // Test SQUARE macro
    int num = 5;
    printf("The square of %d is %d\n", num, SQUARE(num));

    // Test ISEQUAL macro
    int a = 10, b = 10, c = 20;
    printf("Are %d and %d equal? %d\n", a, b, ISEQUAL(a, b));
    printf("Are %d and %d equal? %d\n", a, c, ISEQUAL(a, c));

    return 0;
}