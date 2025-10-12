// Q86: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);  // Input string

    int len = strlen(str);
    int isPalindrome = 1; // assume true

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0; // not palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
