//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastSeen[128];
    for (int i = 0; i < 128; i++) {
        lastSeen[i] = -1;
    }

    int n = strlen(s);
    int maxLength = 0;
    int left = 0;
    for (int right = 0; right < n; right++) {
        char currentChar = s[right];

        if (lastSeen[currentChar] != -1 && lastSeen[currentChar] >= left) {
            left = lastSeen[currentChar] + 1;
        }

        lastSeen[currentChar] = right;
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int length = lengthOfLongestSubstring(s);

    printf("Length of the longest substring without repeating characters: %d\n", length);

    return 0;
}


