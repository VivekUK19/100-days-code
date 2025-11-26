#include <stdio.h>

int main(){
/*Q118: Write a program to take an input array of size n.
The array should contain all the integers between 0 to n except for one. Print that missing number
Sample Test Cases:
Input 1   :
nums1 = [0,3,2,4]
Output 1  : 1

Input 2   :
nums1 = [1,2,3]
Output 2  : 0

Input 3   :
nums1 = [0,4,3,1,5]
Output 3  : 2  */
    int n;
    printf("enter size of array :\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter values of array :\n");
    for (int i = 0; i < n; i++)
    {        scanf("%d",&arr[i]);    }
    
    int sum =(n*(n+1))/2;
    int arr_sum=0;
    for (int i = 0; i < n; i++)
    {
        arr_sum = arr_sum + arr[i];
    }
    if (arr_sum==sum)
    {   printf("0");    }
    else
        printf("missing number : %d",sum-arr_sum);
    
    
    return 0;
}