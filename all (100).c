// Print all sub-strings of a string.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("All substrings:\n");
    for (i = 0; i < len; i++) {
        for (j = 1; j <= len - i; j++) {
            char sub[100];
            strncpy(sub, str + i, j);
            sub[j] = '\0';  // Null-terminate the substring
            printf("%s\n", sub);
        }
    }

    return 0;
}