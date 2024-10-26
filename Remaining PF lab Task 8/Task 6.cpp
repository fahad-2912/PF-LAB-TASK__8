#include <stdio.h>

int main() {
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Length is: %d\n", length);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (i == 0 || i == length - 1 || j == 0 || j == length - 1 || i == j || i + j == length - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

