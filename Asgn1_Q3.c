//Q3. WAP a subtract two integers without using minus (-) operator. (Hint Bitwise Operator)

#include<stdio.h>

int main() 
{
    int n1,n2,sum;
    printf("Enter any two numbers \n");
    scanf("%d %d", &n1,&n2);
    sum=n1+(~n2)+1;
    printf("Difference is %d", sum);
    return 0;
}