#include <stdio.h>

int main(){
/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode.
If the file pointer is NULL, print an error message; otherwise, read and display its content.
Sample Test Cases:
Input 1:                                                 Input 2:
Filename: sample.txt (File Exists: Yes)                  Filename: nofile.txt (File Exists: No)
Output 1:                                                Output 2:
File opened successfully.                                Error: File does not exist!
(Displays file content) */

    char filename[100];
    FILE *fp;

    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar();  

    fp = fopen(filename, "r");  
    if (fp == NULL) {
        printf("file does not exist.\n");
        return 1;
    }
    char ch = fgetc(fp);
    while (ch != EOF)
    { printf("%c",ch);
        ch = fgetc(fp);
    }
    fclose(fp);

    return 0;

}
