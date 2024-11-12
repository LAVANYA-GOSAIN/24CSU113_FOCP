//Q10. WAP to print Pascal’s Triangle.

#include <stdio.h>

int main() 
{
    int rows, digit = 1;


    printf("Enter number of rows: ");
    scanf("%d",&rows);


    for(int i=0; i<rows; i++) 
    {
        for(int sp=1; sp <= rows-i; sp++)
        {
            printf("  ");
        }

        for(int j=0; j<=i; j++) 
        {
            if (j==0 || i==0)
            {
                digit = 1;
            }
            else
            {
                digit = digit*(i-j+1)/j;
            }

            printf("%4d", digit);
        }
        printf("\n");
    }

    return 0;
}