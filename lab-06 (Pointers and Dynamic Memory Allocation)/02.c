#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEMBERS_SIZE 3
#define BUFFER_SIZE 100

char buffer[BUFFER_SIZE];

char *getName(void);

int main(int argc, char const *argv[])
{
    char **members = malloc(MEMBERS_SIZE * sizeof(char *));

    for (int i = 0; i < MEMBERS_SIZE; i++) {
        printf("Enter name:\n");
        members[i] = getName();
    }

    for (int i = 0; i < MEMBERS_SIZE; i++)
        printf("Member: %s\n", members[i]);

    return 0;
}

char *getName() {
    scanf("%s", buffer);
    return strcpy((char *) malloc(strlen(buffer)), buffer);
}