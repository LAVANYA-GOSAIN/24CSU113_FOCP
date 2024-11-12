/*
Q9. WAP to print following Pyramid:
 0        0
 01      01
 010    010
 0101  0101
 0101001010
*/

#include <stdio.h>

int main() 
{
    int i, j, sp, n ; 
    printf("Enter the number of lines of pattern: ");
    scanf("%d",&n); 

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j % 2);  
        }

        for (sp = 1; sp <= 2 * (n - i); sp++) 
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++) 
        {
            printf("%d", j % 2);  
        }

        printf("\n");
    }
    return 0;
}