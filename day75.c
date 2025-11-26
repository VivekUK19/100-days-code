#include <stdio.h>
#include <string.h>

int main(){
/*Q125: Open an existing file in append mode and allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.   */

    char filename[100];
    char line[500];
    FILE *fp;

    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar();  

    fp = fopen(filename, "a");  
    if (fp == NULL) {
        printf("file does not exist.\n");
        return 1;
    }

    printf("Enter a line to append: ");
    fgets(line, sizeof(line), stdin); 

    fputs(line, fp);

    fclose(fp);

    printf("Line  successfully transferred to %s\n", filename);
    return 0;
}