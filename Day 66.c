//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>
#include <stdlib.h>
int findTwoSumIndices(int* nums, int numsSize, int target, int* index1, int* index2) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *index1 = i;
                *index2 = j;
                return 1; 
            }
        }
    }

    return 0;
}

int main() {
    int nums_example1[] = {2, 7, 11, 15};
    int target_example1 = 9;
    int size1 = sizeof(nums_example1) / sizeof(nums_example1[0]);
    int i1, j1;

    if (findTwoSumIndices(nums_example1, size1, target_example1, &i1, &j1)) {
        printf("Input 1 Output: %d %d\n", i1, j1);
    } else {
        printf("Input 1 Output: -1 -1\n");
    }

    int nums_example2[] = {3, 2, 4};
    int target_example2 = 6;
    int size2 = sizeof(nums_example2) / sizeof(nums_example2[0]);
    int i2, j2;

    if (findTwoSumIndices(nums_example2, size2, target_example2, &i2, &j2)) {
        printf("Input 2 Output: %d %d\n", i2, j2);
    } else {
        printf("Input 2 Output: -1 -1\n");
    }

    int nums_example3[] = {3, 3};
    int target_example3 = 6;
    int size3 = sizeof(nums_example3) / sizeof(nums_example3[0]);
    int i3, j3;

    if (findTwoSumIndices(nums_example3, size3, target_example3, &i3, &j3)) {
        printf("Input 3 Output: %d %d\n", i3, j3);
    } else {
        printf("Input 3 Output: -1 -1\n");
    }
    return 0;
}
