// Q10. WAP to count prime numbers in an array.

#include <stdio.h>

int prime(int num) 
{
    if (num <= 1) 
    {
        return 0; 
    }
    for (int i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            return 0; 
        }
    }
    return 1; 
}

int main() 
{
    int num, count = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    
    int arr[num];  
    
    printf("Enter the elements:\n");
    for (int i = 0; i < num; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < num; i++) 
    {
        if (prime(arr[i])) 
        {
            count++;  
        }
    }
    
    printf("Number of prime numbers: %d\n", count);
    
    return 0;
}

