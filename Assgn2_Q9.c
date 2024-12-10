//Q9. WAP to find a peak element which is not smaller than its neighbors.#include <stdio.h>

#include<stdio.h>
int main() 
{
    int n=5;  //size
    int arr[50]={34,56,78,47,33};

    int peak = 0;

    if (n == 1 || arr[0] >= arr[1]) 
    {
        printf("Peak element is: %d\n", arr[0]);
        peak= 1;
    }

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element is: %d\n", arr[i]);
            peak = 1;
        }
    }

    if (n > 1 && arr[n - 1] >= arr[n - 2]) {
        printf("Peak element is: %d\n", arr[n - 1]);
        peak = 1;
    }

    if (!peak) {
        printf("No peak element found in the array.\n");
    }

    return 0;
}