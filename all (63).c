//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int size1, size2, i, j;
    scanf("%d", &size1);
    int arr1[size1];
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &size2);
    int arr2[size2];
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    int merged_size = size1 + size2;
    int merged_arr[merged_size];
    for (i = 0; i < size1; i++) {
        merged_arr[i] = arr1[i];
    }
    for (j = 0; j < size2; j++) {
        merged_arr[size1 + j] = arr2[j];
    }
    for (i = 0; i < merged_size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}



