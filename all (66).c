Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, key, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n+1]; // +1 to accommodate the new element
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find the position to insert
    pos = 0;
    while(pos < n && arr[pos] < key) {
        pos++;
    }

    // Shift elements to make space
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the element
    arr[pos] = key;
    n++; // increase size

    // Print the updated array
    printf("Updated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
