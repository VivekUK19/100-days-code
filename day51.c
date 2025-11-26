#include <stdio.h>

int main(){
/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target
and print the index of first and last occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:

Input 1  :                                       Input 2  :                                       Input 3 :
nums = [5,7,7,8,8,10], target = 8                nums = [5,7,7,8,8,10], target = 6                nums = [5,7,7,8,8,10], target = 10
Output 1 : 3,4                                   Output 2 : -1,-1                                 Output 3 : 5,5  */
    int n;
    printf("enter the size of array \n");
    scanf("%d",&n);
    
    int arr[n];

    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the target\n");
    scanf("%d",&target);

    int first = -1, last = -1;

    for (int i = 0; i < n ; i++)
    {
        if (target==arr[i])
        {
            if (first == -1)
            {first=i;}  

            last=i;
            
        }
    }
    printf("%d  %d",first,last);
    
    return 0;
}