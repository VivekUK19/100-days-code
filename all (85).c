// Q85: Reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);  // Input string
    
    int len = strlen(str);
    
    // Reverse logic
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    return 0;
}
