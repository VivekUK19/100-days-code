#include <stdio.h>

int main(){
/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i]is equal to the 
product of all the elements of nums except nums[i].The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
Sample Test Cases:
Input 1  :                                     Input 2  :
nums = [1,2,3,4]                               nums = [-1,1,0,-3,3]
Output 1 :                                     Output 2 :
[24,12,8,6]                                    [0,0,9,0,0]  */

    int n;
    printf("enter the size of array:\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter the values of array:\n");
    for (int i = 0; i < n; i++)
    {   scanf("%d",&arr[i]);   }

    int ans[n];

    int prefix = 1;
    for (int i = 0; i < n; i++)
    {
        ans[i]=prefix;
        prefix*=arr[i];
    }
    
    int suffix=1;
    for (int i = n-1; i >=0; i--)
    {
        ans[i]*=suffix;
        suffix*=arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ,",ans[i]);
    }
    



    return 0;
}