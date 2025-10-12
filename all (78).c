Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (n != m) {
        printf("Matrix is not square\n");
        return 0;
    }

    int mat[n][n];

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;

    // Sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
