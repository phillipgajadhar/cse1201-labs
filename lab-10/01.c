#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    FILE *fp;

    // Open file in write mode
    fp = fopen("test.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    printf("Enter the number of lines to write: ");
    scanf("%d", &n);

    // Write 'n' lines to the file
    for (int i = 1; i <= n; i++)
        fprintf(fp, "test line %d\n", i);

    // Close the file
    fclose(fp);

    return 0;
}
