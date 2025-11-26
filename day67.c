#include <stdio.h>

int main(){
/*Q117: Write a program to take two sorted arrays of size m and n as input.
Merge both the arrays such that the merged array is also sorted. Print the merged array.
Sample Test Cases:
Input 1   :
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1  :
2 4 7 8 10 11 15

Input 2   :
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2  :
1 2 7 9 10 17

Input 3   :
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3  :
-10 -3 -2 -1 7 7  */
    int a,b;
    printf("enter size of array 1 :\n");
    scanf("%d",&a);
    printf("enter size of array 2 :\n");
    scanf("%d",&b);

    int arr1[a],arr2[b];
    printf("enter values of array 1 :\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter values of array 2 :\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr[40],i,j;
      for ( i = 0; i < a; i++) {
        arr[i] = arr1[i];
    }
    for ( j = 0; j < b; j++) {
        arr[i + j] = arr2[j];
    }

    
    printf("sorted array:\n");
    for (i = 0; i < a + b; i++) {
        printf("%d ", arr[i]); }
    
    
    
    return 0;
}