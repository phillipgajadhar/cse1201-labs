#include <stdio.h>

int isOdd(int x) {
    return x % 2 != 0;
}

int isEven(int x) {
    return x % 2 == 0;
}

int main() {
    int num;
    char c;

    do {
        printf("Enter a number: \n");
        scanf("%d", &num);

        if (isEven(num)) {
            printf("%d is even\n", num);
        } else {
            printf("%d is odd\n", num);
        }

        printf("Continue? (y)\n");
        scanf(" %c", &c);

    } while (c == 'y');

    return 0;
}