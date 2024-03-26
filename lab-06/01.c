#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float input;

    scanf("%f", &input);

    float low, high;

    low = floor(input);
    high = ceil(input);

    printf("%f\n", input);
    printf("%f\n", low);
    printf("%f\n", high);

    return 0;
}
