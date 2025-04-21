#include <stdio.h>

int isEven(int x) {
    return x % 2 == 0;
}

void printEvenNumbers(int xs[], int n) {
    for (int i = 0; i < n; i++)
        if (isEven(xs[i])) printf("%d\n", xs[i]);
}

int computeSum(int xs[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += xs[i];
    }
    return sum;
}

float computeAverage(int sum, int n) {
    return (float)sum / n;
}

int findMin(int xs[], int n) {
    int min = xs[0];
    for (int i = 1; i < n; i++) {
        if (xs[i] < min) min = xs[i];
    }
    return min;
}

int findMax(int xs[], int n) {
    int max = xs[0];
    for (int i = 1; i < n; i++) {
        if (xs[i] > max) max = xs[i];
    }
    return max;
}

int main() {
    int n, i, sum, min, max;
    float avg;

    printf("How many numbers would you like to enter:\n");
    scanf("%d", &n);

    int xs[n];
    for (i = 0; i < n; i++) {
        printf("Enter a (%d) number:\n", i + 1);
        scanf("%d", &xs[i]);
    }

    printf("The even numbers are:\n");
    printEvenNumbers(xs, n);

    sum = computeSum(xs, n);
    avg = computeAverage(sum, n);
    printf("The sum is %d\nThe avg is %.2f\n", sum, avg);

    min = findMin(xs, n);
    max = findMax(xs, n);
    printf("Min: %d\nMax: %d\n", min, max);
}