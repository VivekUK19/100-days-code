#include <stdio.h>
#include <ctype.h>

int main(){
/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase,
and writes the result to output.txt.
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING    */

    FILE *fp1,*fp2;
    char input_file[100],output_file[100];
    char ch;

    printf("Enter the input filename: ");
    scanf("%s", input_file);
    printf("Enter the output filename: ");
    scanf("%s", output_file);

    fp1 = fopen(input_file, "r");  
    if (fp1 == NULL) {
        printf("input file does not exist.\n");
        return 1;}
    fp2 = fopen(output_file, "w");
    if (fp2 == NULL) {
        printf("output file does not exist.\n");
        return 1;}
    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    printf("done successfully");

    return 0;
}