#include <stdio.h>

char determineGrade(int score) {
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
}

void assignGrades(int scores[], char grades[], int size) {
    for (int i = 0; i < size; i++) {
        grades[i] = determineGrade(scores[i]);
    }
}

void printGrades(const int scores[], const char grades[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Score: %d -> Grade: %c\n", scores[i], grades[i]);
    }
}

int main() {
    int studentGrades[5] = {95, 82, 74, 60, 45};
    char letterGrades[5];

    assignGrades(studentGrades, letterGrades, 5);

    printf("Student Scores and Grades:\n");
    printGrades(studentGrades, letterGrades, 5);

    return 0;
}
