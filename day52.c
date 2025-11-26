#include <stdio.h>

int main(){
/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the 
smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x.
If such an element does not exist, print -1.
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
Sample Test Cases:
Input 1:                                              Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5                arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 1  :  2                                        Output 2  : -1


Input 3:                                             Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0            arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 3  :  0                                       Output 4  :  2        */
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter values\n");

    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int x;
    printf("enter the value of x\n");
    scanf("%d",&x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>x)
        {   printf("index : %d ",i); 
            break;}
    }
    

    return 0;
}