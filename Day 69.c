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
int findRepeatedElementXOR(int* nums, int numsSize) {
    int result = 0;

    // XOR all elements in the array
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }
    int frequency_map;
    for(int i = 0; i < 1001; i++) {
        frequency_map[i] = 0;
    }

    for (int i = 0; i < numsSize; i++) {
        if (frequency_map[nums[i]] == 1) {
            return nums[i]; 
        }
        frequency_map[nums[i]] = 1;
    }

    return -1; 
}

int main() {
    int nums1[] = {1, 3, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input 1 Output: %d\n", findRepeatedElementXOR(nums1, size1));

    int nums2[] = {1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input 2 Output: %d\n", findRepeatedElementXOR(nums2, size2));

    int nums3[] = {0, 4, 1, 1, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Input 3 Output: %d\n", findRepeatedElementXOR(nums3, size3));

    return 0;
}
 