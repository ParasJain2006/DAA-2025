#include <stdio.h>

int main() {

    int A[2][2], B[2][2], C[2][2];

    printf("Enter 4 elements of A:\n");
    scanf("%d%d%d%d",&A[0][0],&A[0][1],&A[1][0],&A[1][1]);

    printf("Enter 4 elements of B:\n");
    scanf("%d%d%d%d",&B[0][0],&B[0][1],&B[1][0],&B[1][1]);

    // using strassen 7 multiplications
    int P = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int Q = (A[1][0] + A[1][1]) * B[0][0];
    int R = A[0][0] * (B[0][1] - B[1][1]);
    int S = A[1][1] * (B[1][0] - B[0][0]);
    int T = (A[0][0] + A[0][1]) * B[1][1];
    int U = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    int V = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);

    // now compute C elements
    C[0][0] = P + S - T + V;
    C[0][1] = R + T;
    C[1][0] = Q + S;
    C[1][1] = P - Q + R + U;

    printf("Resultant Matrix C:\n");
    printf("%d %d\n",C[0][0],C[0][1]);
    printf("%d %d\n",C[1][0],C[1][1]);

    return 0;
}
