#include <stdio.h>

int main(){
/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum 
of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. 
Print the pivot integer x. If no such integer exists, print -1.
Assume that it is guaranteed that there will be at most one pivot integer for the given input.
Sample Test Cases:
Input 1  :              Input 2  :                 Input 3  :
n = 8                   n = 1                      n = 4
Output 1 : 6            Output 2 : 1               Output 3 :  -1 */

    
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);

    
    int total_count=0;
    for (int i = 0; i = n; i++)
    {
        total_count += i;
    }

    int leftsum=0;
    int index=-1;

    for (int x = 1; x <= n; x++) {
        leftsum += x;                         // sum(1..x)
        int rightsum = total_count - (leftsum - x); // sum(x..n)
        if (leftsum == rightsum) {
            index = x;
            break;
        }
    }


    if(index != -1)
        printf("Pivot Index = %d\n", index);
    else
        printf("No Pivot Index exists\n");


    return 0;
}