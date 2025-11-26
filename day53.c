#include <stdio.h>

int main(){
/*Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. 
Print the leftmost pivot index. If no such index exists, print -1.
Sample Test Cases:
Input 1   :                        Input 2   :          Input 3  :
nums = [1,7,3,6,5,6]               nums = [1,2,3]       nums = [2,1,-1]
Output 1  :  3                     Output 2  : -1       Output 3 : 0      */
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter the values of array.\n");
    for (int i = 0; i < n; i++)
    {   scanf("%d",&arr[i]);    }

    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int index = -1;

    for(int i = 0; i < n; i++) {
        if(leftSum == totalSum - leftSum - arr[i]) {
            index = i;
            break;
        }
        leftSum += arr[i];
    }

    if(index != -1)
        printf("Pivot Index = %d\n", index);
    else
        printf("No Pivot Index exists\n");

    
    






    return 0;
}