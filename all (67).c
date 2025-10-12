Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, pos, element;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 to accommodate new element

    // Read array elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position and element to insert
    printf("Enter position (1-based) and element to insert: ");
    scanf("%d %d", &pos, &element);

    // Check if position is valid
    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert element
    arr[pos-1] = element;
    n++; // Increase size

    // Print updated array
    printf("Updated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
