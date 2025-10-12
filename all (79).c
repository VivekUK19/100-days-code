// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < n + m - 1; d++) {
        if (d % 2 == 0) {
            // Traverse from bottom to top
            int r = (d < n) ? d : n - 1;
            int c = d - r;
            while (r >= 0 && c < m) {
                printf("%d ", mat[r][c]);
                r--;
                c++;
            }
        } else {
            // Traverse from top to bottom
            int c = (d < m) ? d : m - 1;
            int r = d - c;
            while (c >= 0 && r < n) {
                printf("%d ", mat[r][c]);
                r++;
                c--;
            }
        }
    }

    printf("\n");
    return 0;
}
