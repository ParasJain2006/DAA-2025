#include <stdio.h>

void rotate(int n, int matrix[n][n]) {
    int i, j, temp;
    // Step 1: Transpose
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // Step 2: Reverse each row
    for (i = 0; i < n; i++) {
        for (j = 0; j < n/2; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][n-1-j];
            matrix[i][n-1-j] = temp;
        }
    }
}
