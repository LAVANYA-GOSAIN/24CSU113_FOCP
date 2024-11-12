//WAP to check whether a given number is Armstrong or not.

#include <stdio.h>
#include <math.h>

int main() 
{
    int num, originalnum, rem, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);
    originalnum = num;

    while(originalnum!=0)
    {
        originalnum/=10;
        n++;
    }
    originalnum = num;
    while(originalnum!=0)
    {
        rem=originalnum%10;
        result+=pow(rem,n);
        originalnum/=10;
    }
    
    if ((int)result == num) 
    {
        printf("%d is an Armstrong number.\n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}   