#include <stdio.h>
#include <ctype.h>

int main(){
/*Q120: Write a program to take a string input. Change it to sentence case.
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.  */
    char str[200];
    
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    if(str[0] != ' '){
        str[0] = toupper(str[0]);
    }

    for(int i = 1; str[i] != '\0'; i++) {
        if(str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("Sentence :\n%s", str);
    return 0;

}
