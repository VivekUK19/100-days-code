#include <stdio.h>

int main(){
/*Q123: Read a text file and count the total number of characters, words, and lines.
A word is defined as a sequence of non-space characters separated by spaces or newlines.
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2    */
    int words=0,character=0,lines=0;
    int totword=0;
    int ch;
    FILE *fptr;
    fptr= fopen("sample.txt" , "r");                
    while (ch = (fgetc(fptr)) != EOF)
    { character++;
        if (ch == '\n')
        {   lines++;}
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            totword = 0;  
        } else if (totword == 0) {
            totword = 1;  
            words++; }
    }
    
    fclose(fptr);
    printf("total characters : %d \n",character);
    printf("total words : %d  \n",words);
    printf("total lines : %d  \n",lines);
    return 0;
} 