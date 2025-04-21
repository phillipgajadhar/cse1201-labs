#include <stdio.h>

int isOdd(int x) {
    return x % 2 == 1;
}

int isEven(int x) {
    return !isOdd(x);
}

int main() {
    int num;

    printf("Enter number: \n");
    scanf("%d", &num);

    if (isOdd(num))
        printf("%d is odd\n", num);
    else
        printf("%d is even\n", num);

    return 0;
}