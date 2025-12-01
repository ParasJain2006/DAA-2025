#include <stdio.h>

int main() {
    int n = 4;

    int M[4][4] = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {0, 0, 0, 1},
        {0, 0, 0, 0}
    };

    for (int c = 0; c < n; c++) {
        int isCeleb = 1;

        for (int i = 0; i < n; i++) {
            if (i == c) continue;

            if (M[c][i] == 1)  // celebrity knows someone → not celebrity
                isCeleb = 0;

            if (M[i][c] == 0)  // someone doesn't know celebrity → not celebrity
                isCeleb = 0;
        }

        if (isCeleb) {
            printf("%d\n", c);
            return 0;
        }
    }

    printf("No celebrity\n");
    return 0;
}
