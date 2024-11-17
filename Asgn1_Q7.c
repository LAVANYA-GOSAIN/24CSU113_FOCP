//Q7. WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per user’s choice.

#include <stdio.h>
#include <math.h>
int main() 
{
    int choice,num,decimal=0,binary=0,remainder=0,p=0;

    printf("1. Binary to Decimal\n2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice==1) 
    {
        printf("Enter binary number: ");
        scanf("%d",&num);
        while(num>0) 
        {
            remainder=num%10;
            decimal+=remainder*pow(2,p);
            num/=10;
            p++;
        }
        printf("Decimal: %d\n",decimal);
    } 
    else if(choice==2) 
    {
        printf("Enter decimal number: ");
        scanf("%d",&num);
        while(num>0) {
            binary=(binary*10)+(num%2);
            num/=2;
        }
        while(binary>0) 
        {
            remainder=binary%10;
            decimal=(decimal*10)+remainder;
            binary/=10;
        }
        printf("Binary: %d\n",decimal);
    } 
    else 
    {
        printf("Invalid choice\n");
    }
    return 0;
}