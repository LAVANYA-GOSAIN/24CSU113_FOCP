/* Q14. Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1 */

#include <stdio.h>

void printDuplicates(int arr[], int size) 
{
    int hasDuplicates = 0; 

    printf("Duplicates in the array are:\n\n ");
    for (int i = 0; i < size - 1; i++)
     {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j])
             {
                printf("%d ", arr[i]);
                hasDuplicates = 1;
                break;
            }
        }
    }
    if (!hasDuplicates)
    {
        printf("-1");
    }
    printf("\n");
}

int main() {
    int arr[10]; 
    int size = 10; 
    for(int i = 0; i < size; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    } 
    printf("Original array:");
    for (int i = 0; i < size; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printDuplicates(arr, size);
    return 0;
}
