// Q2. WAP to print grade of students as per their marks given in an array. 
//(>=75-- A grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade)

#include<stdio.h>
int main()
{
    int i,grade,n;
    
    printf("Enter the number of students");
    scanf("%d",&n);

    int marks[n];
    
    printf("Enter marks of %d students\n",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

    printf("Grades of students are:\n");

    for(int i=0;i<n;i++)
    {
        if(marks[i]>=75)
        {
            grade='A';
        }
        else if(marks[i]>=60)
        {
            grade='B';
        }
        else if(marks[i]>=40)
        {
            grade='C';
        }
        else
        {
            grade='D';
        }
            printf("\nIndex = %d    Marks[%d] = %d    Grade = %c",i,i,marks[i],grade);
    }
    return 0; 
}