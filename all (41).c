//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, swapped_num, first_digit, last_digit, digits_count;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0 && num <= 9) {
        printf("%d\n", num);
        return 0;
    }
    last_digit = num % 10;
    digits_count = (int)log10(num) + 1;
    temp = num;
    first_digit = temp / pow(10, digits_count - 1);
    swapped_num = num - (first_digit * pow(10, digits_count - 1));
    swapped_num = swapped_num - last_digit;
    swapped_num = swapped_num + (last_digit * pow(10, digits_count - 1));
    swapped_num = swapped_num + first_digit;
    printf("%d\n", swapped_num);

    return 0;
}
