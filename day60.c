#include <stdio.h>

int main(){
/*Q110: Write a program to take an integer array arr and an integer k as inputs.
The task is to find the maximum element in each subarray of size k moving from left to right.
Print the maximum elements for each window separated by spaces as output.
Sample Test Cases:
Input 1   :
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1  :  3 3 4 5 5 5 6

Input 2   :
arr[5, 1, 3, 4, 2] = , k = 1
Output 2  :  5 1 3 4 2 */

    int n;
    printf("enter size of array:\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter values of array:\n");
    for (int i = 0; i < n; i++)
    {   scanf("%d",&arr[i]);    }
    
    int k;
    printf("enter the value of k :\n");
    scanf("%d",&k);

    
    for (int i = 0; i <= n-k ; i++)
    {   int largest = arr[i];
        for (int j = i+1; j < i+k ; j++)
        {
            if (arr[j]>largest)
            {
                largest=arr[j];
            }
            
        }
        
        printf("%d ",largest);
    }
    

    return 0;
}