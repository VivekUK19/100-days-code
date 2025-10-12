Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n, i, pos;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position to delete (1-based)
    printf("Enter position of element to delete: ");
    scanf("%d", &pos);

    // Check for valid position
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to left to delete
    for(i = pos-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--; // Decrease size

    // Print updated array
    printf("Updated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
