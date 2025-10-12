// Q75: Add two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of first matrix
    scanf("%d %d", &r1, &c1);
    int A[r1][c1];
    
    // Input first matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input dimensions of second matrix
    scanf("%d %d", &r2, &c2);
    int B[r2][c2];
    
    // Input second matrix
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if addition is possible
    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible\n");
        return 0;
    }

    int sum[r1][c1];

    // Add matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print result
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
