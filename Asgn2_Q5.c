// Q5. WAP to find sum of all scores in Marks array.

#include<stdio.h>
int main()
{
    int num,i;
    int sum=0;
    printf("Enter the number of students:");
    scanf("%d",&num);
    int marks[num];
    printf("Enter marks for %d students\n",num);

    for(i=0;i<num;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<num;i++)
    {
        sum+=marks[i];
    }
    printf("Sum of all scores is %d\n",sum);
    return 0;
}