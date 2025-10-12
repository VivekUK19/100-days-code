/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            if (i == 1 && j == 3) {
                printf("*\n");
            } else if (i == 2 && j >= 2 && j <= 4) {
                printf("*\n");
            } else if (i == 3 && j >= 1 && j <= 5) {
                printf("*\n");
            } else if (i == 4 && j >= 2 && j <= 4) {
                printf("*\n");
            } else if (i == 5 && j == 3) {
                printf("*\n");
            } else {
                printf("   \n");
            }
        }
        printf("\n");
    }
    return 0;
}


