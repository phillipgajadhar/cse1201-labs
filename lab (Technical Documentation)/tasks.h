#ifndef TASKS_H
#define TASKS_H

#include <stdio.h>

#define MAX_TASK_LENGTH 100

void add_task(FILE *file);
void view_tasks(FILE *file);
void clear_tasks(FILE *file);

#endif // TASKS_H