// Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int vowels = 0, consonants = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = tolower(str[i]);  // Convert to lowercase for easy comparison

        if ((ch >= 'a' && ch <= 'z')) {  // Consider only alphabetic characters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
