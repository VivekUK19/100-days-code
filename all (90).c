// Q90: Toggle case of each character in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Toggle case
    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    // Output
    printf("Toggled string: %s\n", str);

    return 0;
}
