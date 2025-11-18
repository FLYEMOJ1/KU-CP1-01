#include <stdio.h>

int matrix[2][3];
int (*p)[3] = matrix;

int main() {
    int val = 1;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = val;
            val++;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            // printf("%d ", *(*(p + i) + j));
            // printf("%d ", p[i][j]);
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}