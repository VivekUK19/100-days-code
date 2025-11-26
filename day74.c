//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100

int main() {
    FILE *sourceFile;
    FILE *destFile;
    char sourceFileName[BUFFER_SIZE];
    char destFileName[BUFFER_SIZE];
    printf("Enter source filename: ");
    if (fgets(sourceFileName, BUFFER_SIZE, stdin) == NULL) return 1;
    sourceFileName[strcspn(sourceFileName, "\n")] = '\0'; // Remove newline

    printf("Enter destination filename: ");
    if (fgets(destFileName, BUFFER_SIZE, stdin) == NULL) return 1;
    destFileName[strcspn(destFileName, "\n")] = '\0'; 
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourceFileName);
        exit(EXIT_FAILURE);
    }
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file %s\n", destFileName);
        fclose(sourceFile); 
        exit(EXIT_FAILURE);
    }
    while ((character = fgetc(sourceFile)) != EOF) {
        if (fputc(character, destFile) == EOF) {
            printf("Error writing to destination file %s\n", destFileName);
            fclose(sourceFile);
            fclose(destFile);
            exit(EXIT_FAILURE);
        }
    }
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully to %s\n", destFileName);

    return 0;
}
