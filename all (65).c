//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, i, target;
    int low, high, mid;
    int index = -1;
    scanf("%d", &n);

    int arr[n]; 

    // Read elements into the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to search for
    scanf("%d", &target);

    // Binary search logic
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2; // Find the middle index

        if (arr[mid] == target) {
            index = mid; // Element found, store its index
            break;
        } else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half
        } else {
            high = mid - 1; // Target is in the left half
        }
    }

    // Print the result
    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}

