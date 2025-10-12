// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    char *token = strtok(str, " ");
    char *last;

    while (token != NULL) {
        last = token; // keep track of last word
        token = strtok(NULL, " ");
        if (token != NULL) // print initial for all except last
            printf("%c.", last[0]);
    }

    printf(" %s", last); // print last word (surname)
    return 0;
}
