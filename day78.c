#include <stdio.h>
#include <string.h>

int main(){
/*Q128: Read a text file and count how many vowels and consonants are in the file.
Ignore digits and special characters.
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10  */

    
    char filename[100];
    int vowel=0,consonant=0;
    FILE *fp;

    printf("enter the filename :");
    scanf("%s", filename);

    fp = fopen(filename , "r");
    if (fp == NULL)
    {
        printf("file not found ");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {   vowel++;    }
        else 
            consonant++;
    }
    fclose(fp);
    printf("total vowels : %d\n",vowel);
    printf("total consonant : %d\n",consonant);
    return 0;
}