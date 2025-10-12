// Q89: Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Input character
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);  // Notice the space before %c to ignore newline

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Output result
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
