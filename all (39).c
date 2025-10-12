//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num; // Work with the positive version of the number
    }
    int has_odd_digit = 0;
    int temp = num;

    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd_digit = 1;
        }
        temp /= 10;
    }
    if (num == 0) {
        printf("Product=1\n");
    } else if (has_odd_digit) {
        printf("Product=%lld\n", product);
    } else {
        printf("Product=1\n");
    }

    return 0;
}
