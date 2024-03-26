#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, i;

    scanf("%d", &n);

    int xs[n];

    for (i = 0; i < n; i++)
        scanf("%d", xs + i);

    for (i = 0; i < n; i++)
        xs[i] = pow(xs[i], 2);


    for (i = 0; i < n; i++)
        printf("%d\n", xs[i]);
    
    
    
    return 0;
}
