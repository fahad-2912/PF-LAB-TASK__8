#include <stdio.h>

int main() {
    int m, n;

    printf("Enter rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n], matrix2[m][n], sum[m][n];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    printf("Resulting Matrix (Sum):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}

