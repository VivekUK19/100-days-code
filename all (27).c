//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n, sum = 0, odd_num = 1, count;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (count = 0; count < n; ++count) {
        sum += odd_num;
        odd_num += 2;
    }

    printf("Sum=%d\n", sum);

    return 0;
}
