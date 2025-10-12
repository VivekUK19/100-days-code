/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, space;

    for (i = 0; i < rows; i++) {
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        for (j = 0; j < rows - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

