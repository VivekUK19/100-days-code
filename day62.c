#include <stdio.h>

int main(){
/*Q112: Write a program to take an integer array arr as input.The task is to find 
the maximum sum of any contiguous subarray using Kadane's algorithm.Print the maximum sum as output.
If all elements are negative, print the largest (least negative) element.
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1  : 11

Input 2:
arr[] = [-2, -4]
Output 2  : -2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3  : 25  */
    int n;
    printf("enter the size of array :\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter values of array :\n");
    for (int i = 0; i < n; i++)
    {   scanf("%d",&arr[i]);    }
    
    int currentsum =arr[0];
    int maxsum=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (currentsum + arr[i] > arr[i])
        {
            currentsum = currentsum + arr[i];
        }
        else
        currentsum=arr[i];

        if (currentsum>maxsum)
        {
            maxsum=currentsum;
        }
    }
    
    printf("maximum subarray sum = %d",maxsum);

    return 0;
}