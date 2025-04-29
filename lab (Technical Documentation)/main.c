#include <stdio.h>
#include <string.h>
#include "tasks.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    FILE *file = fopen(filename, "r+");
    if (file == NULL) {
        file = fopen(filename, "w+");
        if (file == NULL) {
            printf("Error: Could not open or create file.\n");
            return 1;
        }
    }

    int choice;

    while (1) {
        printf("\n--- To-Do List Manager ---\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Clear All Tasks\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline from input buffer

        switch (choice) {
            case 1:
                add_task(file);
                break;
            case 2:
                view_tasks(file);
                break;
            case 3:
                clear_tasks(file);
                break;
            case 4:
                fclose(file);
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}