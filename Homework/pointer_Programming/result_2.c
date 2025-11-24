#include <stdio.h>

int main() {
    int matrix[2][3];
    int (*p)[3] = matrix;
    int val = 1;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = val++;
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
    return 0;
}