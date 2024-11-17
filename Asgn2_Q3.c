// Q3. WAP to find who scored first “99” in an array marks.

#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number of students:");
scanf("%d",&n);
int marks[n];

int size=sizeof(marks)/sizeof(marks[10]);

printf("Enter marks of student %d students\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&marks[i]);
}
int found = 1; 
for(i = 0; i < size; i++) 
{
        if(marks[i] == 99) 
        {
            printf("The first student who scored 99 is at index %d (Student %d).\n", i, i + 1);
            found = 1; 
            break;
        }
}
    
    if(!found) 
    {
        printf("No student scored 99.\n");
    } 
    
    
    return 0;
}
