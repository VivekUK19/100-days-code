#include <stdio.h>
#include <string.h>

int main(){
/*Q129: A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00     */
    int num,sum=0,count=0,avg=0;
    char filename[100];
    printf("enter the filename \n");
    scanf("%s", filename);

    FILE *fp;
    fp = fopen(filename,"r");
    if (fp == NULL )
    {
        printf("file not found \n");
    }
    while (fscanf(fp,"%d",&num)==1)
    {
        sum+=num;
        count++;
    }
    fclose(fp);

    printf("sum : %d",sum);
    printf("avg : %d",sum/count);


    return 0;
}