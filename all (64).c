//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int digit_counts[10] = {0};
    int max_count = 0;
    int most_frequent_digit = 0;
    scanf("%lld", &num);
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    
    long long temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        digit_counts[digit]++;
        temp /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (digit_counts[i] > max_count) {
            max_count = digit_counts[i];
            most_frequent_digit = i;
        }
    }
    printf("%d\n", most_frequent_digit);
    
    return 0;
}



