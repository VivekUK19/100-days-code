Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, i, k;
    
    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read number of positions to rotate
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    
    k = k % n; // handle k > n
    if(k < 0) k += n; // handle negative k
    
    int rotated[n];
    
    // Rotate array
    for(i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    
    // Print rotated array
    printf("Rotated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    
    return 0;
}
