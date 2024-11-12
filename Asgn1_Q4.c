//WAP to accept two integer numbers and swap them using 4 different methods in C language.

#include <stdio.h>

int main() 
{
    int num1, num2, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);


    // Method 1: Using arithmetic operations
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Using arithmetic operations: num1 = %d, num2 = %d\n", num1, num2);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Method 2: Using a variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Using a variable: num1 = %d, num2 = %d\n", num1, num2);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Method 3: Using bitwise XOR
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("Using bitwise XOR: num1 = %d, num2 = %d\n", num1, num2);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Method 4: Using pointers
    int *pnum1 = &num1, *pnum2 = &num2;
    *pnum1 = *pnum1 + *pnum2;
    *pnum2 = *pnum1 - *pnum2;
    *pnum1 = *pnum1 - *pnum2;
    printf("Using pointers: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}