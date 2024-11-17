/* Q13. Given an array, the task is to cyclically rotate the array clockwise by one time.
Examples:
Input: arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5} */

#include <stdio.h>

void rotatearrayClockwise(int arr[], int size) {
    int lastElement = arr[size - 1];
    
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = lastElement;
}

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotatearrayClockwise(arr, size);

    printf("Array after rotation: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
