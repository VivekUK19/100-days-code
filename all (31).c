//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int decimal_num, remainder, binary_num = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    if (decimal_num == 0) {
        printf("0\n");
        return 0;
    }

    while (decimal_num > 0) {
        remainder = decimal_num % 2;
        binary_num += remainder * place;
        decimal_num /= 2;
        place *= 10;
    }

    printf("%d\n", binary_num);

    return 0;
}
