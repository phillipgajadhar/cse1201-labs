#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void printTitleAndFullName(char title[], char name[]);
void printTitleAndSurname(char title[], char fullName[]);

// Global variables
const int MAX_TITLE = 16;
const int MAX_NAME = 64;
const int MAX_COMBINED = 128;

// Function implementations
// print title and full name
void printTitleAndFullName(char title[], char name[]) {
    char result[MAX_COMBINED];

    strcpy(result, title);
    strcat(result, " ");
    strcat(result, name);

    puts(result);
}

// print title and surname
void printTitleAndSurname(char title[], char fullName[]) {
    char result[MAX_COMBINED];
    int i, lastSpaceIndex = -1;

    // Loop through the full name from the end to find whitespace
    for (i = strlen(fullName) - 1; i >= 0; i--) {
        if (fullName[i] == ' ') {
            lastSpaceIndex = i;
            break;
        }
    }

    if (lastSpaceIndex != -1) {
        // Copy title and surname
        strcpy(result, title);
        strcat(result, " ");
        strcat(result, &fullName[lastSpaceIndex + 1]); // Use addressof operator (much like scanf)
    } else {
        // If no spaces are found, assume the full name is the surname
        printTitleAndFullName(title, fullName);
    }

    puts(result);
}

int main()
{
    char title[MAX_TITLE], fullName[MAX_NAME];

    // Collect user input
    printf("Enter your title (e.g., Ms., Mr., Professor): ");
    fgets(title, MAX_TITLE, stdin);
    title[strcspn(title, "\n")] = '\0'; // Replace newline character with null terminator

    printf("Enter your full name (e.g., John Alexander Smith): ");
    fgets(fullName, MAX_NAME, stdin);
    fullName[strcspn(fullName, "\n")] = '\0'; // Replace newline character with null terminator

    // Combine title and full name
    puts("Title and Full Name:");
    printTitleAndFullName(title, fullName);

    // Combine title and surname
    puts("Title and Surname:");
    printTitleAndSurname(title, fullName);

    return 0;
}