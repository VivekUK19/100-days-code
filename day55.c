#include <stdio.h>

int main(){
/*Q105: Write a program to take an integer array nums of size n, and print the majority element.
The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such
element exists.Note: Majority Element is not necessarily the element that is present most number of times.
Sample Test Cases:
Input 1  :                 Input 2  :                  Input 3  :
nums = [3,2,3]             nums = [2,2,1,1,1,2,2]      nums = [2,2,1,1,1,2,2,3]
Output 1 : 3               Output 2 : 2                Output 3 : -1    */

    int n;
    printf("enter size of array\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter values of array\n");

    for (int i = 0; i < n; i++)
    {   scanf("%d",&arr[i]);    }

    int count=0,number=0;

    for (int i = 0; i < n; i++)
    {
        if (count==0)
        {
            number=arr[i];
            count=1;
        }
        else if (arr[i]==number)
        {
            count++;
        }
        else
        count--;
    }
    
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == number)
            count++;
    }

    if (count > n / 2) {
        printf("%d", number);
    } else {
        printf("-1");
    }






    return 0;
}