Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    // Read number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Read matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add element to sum
        }
    }

    // Print sum
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
