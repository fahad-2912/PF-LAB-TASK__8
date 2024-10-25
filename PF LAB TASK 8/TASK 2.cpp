#include <stdio.h>

#define SIZE 4

void inputGrades(int grades[SIZE][SIZE]) {
    printf("Enter the grades for 4 students in 4 subjects (negative grades will be replaced by zero):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Student %d, Subject %d: ", i + 1, j + 1);
            scanf("%d", &grades[i][j]);
        }
    }
}

void processGrades(int grades[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (grades[i][j] < 0) {
                grades[i][j] = 0; 
            }
        }
    }
}

void displayGrades(int grades[SIZE][SIZE]) {
    printf("\nUpdated grades matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int grades[SIZE][SIZE];

    inputGrades(grades);
    processGrades(grades);
    displayGrades(grades);

    return 0;
}
