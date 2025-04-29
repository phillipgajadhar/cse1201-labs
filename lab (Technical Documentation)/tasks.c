#include "tasks.h"
#include <string.h>

void add_task(FILE *file) {
    char task[MAX_TASK_LENGTH];
    printf("Enter task: ");
    fgets(task, MAX_TASK_LENGTH, stdin);
    task[strcspn(task, "\n")] = '\0'; // Remove newline

    fprintf(file, "%s\n", task);
    printf("Task added!\n");
}

void view_tasks(FILE *file) {
    char task[MAX_TASK_LENGTH];
    int count = 1;
    printf("\n--- Your Tasks ---\n");
    rewind(file); // Reset file pointer to the beginning
    while (fgets(task, MAX_TASK_LENGTH, file) != NULL) {
        printf("%d. %s", count++, task);
    }
}

void clear_tasks(FILE *file) {
    freopen(NULL, "w", file); // Reopen file in write mode to clear content
    printf("All tasks cleared.\n");
}