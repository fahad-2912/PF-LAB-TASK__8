#include <stdio.h>

int main() {
    int matrix[4][4], i, j, k, temp;

    printf("Enter 4x4 matrix:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &matrix[i][j]);

    for (j = 0; j < 4; j++) {
        for (i = 0; i < 3; i++) {
            for (k = i + 1; k < 4; k++) {
                if (matrix[i][j] > matrix[k][j]) {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[k][j];
                    matrix[k][j] = temp;
                }
            }
        }
    }

    printf("Sorted matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}


