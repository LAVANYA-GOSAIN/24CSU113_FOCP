// Q7. WAP to check whether score is even or odd in an array.

#include<stdio.h>
int main()
{
    int num,i;
    float sum=0.0,average;
    printf("Enter the number of students:");
    scanf("%d",&num);
    int marks[num];
    printf("Enter marks for %d students\n",num);

    for(i=0;i<num;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Results: \n");
    for(i=0;i<num;i++)
    {
        if(marks[i]%2==0)
        {
            printf("Marks:%d is Even\n",marks[i]);
        }
        else
        {
            printf("Marks:%d is Odd\n",marks[i]);
        }
    }
    return 0;
}