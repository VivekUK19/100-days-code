//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int number, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);
    int temp = number; 
    while (temp != 0) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }
    
    printf("Sum=%d\n", sum);

    return 0;
}
