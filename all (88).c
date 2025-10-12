Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    // Read full line with spaces
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);

    return 0;
}
