// Q6. WAP to find average score of the Marks array.

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
    for(i=0;i<num;i++)
    {
        sum+=marks[i];
    }
    average=sum/num;
    printf("The average score is %.2f\n",average);
    return 0;
}