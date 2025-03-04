#include <stdio.h>

#define SIZE 5

void assignGrades(int scores[], char grades[], int size) {
    for (int i = 0; i < size; i++) {
        if (scores[i] >= 90)
            grades[i] = 'A';
        else if (scores[i] >= 80)
            grades[i] = 'B';
        else if (scores[i] >= 70)
            grades[i] = 'C';
        else if (scores[i] >= 60)
            grades[i] = 'D';
        else
            grades[i] = 'F';
    }
}

int main() {
    int studentGrades[SIZE] = {95, 82, 74, 60, 45};
    char letterGrades[SIZE];

    assignGrades(studentGrades, letterGrades, SIZE);

    printf("Student Scores and Grades:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Score: %d -> Grade: %c\n", studentGrades[i], letterGrades[i]);
    }

    return 0;
}
