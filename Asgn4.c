//Rock Paper Scissor 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int user_choice,comp_choice,random_choice;
    srand(time(NULL));
    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissor\n");
    scanf("%d",&user_choice);
    random_choice=rand()%100+1;
    if(random_choice<=33)
    {
        comp_choice=1;
        printf("Computer chose Rock\n");
    }
    else if(random_choice<=66)
    {
        comp_choice=2;
        printf("Computer chose Paper\n");
    }
    else
    {
        comp_choice=3;
        printf("Computer chose Scissor\n");
    }
    if(user_choice==1)
    {
        if(comp_choice==1)
        {
            printf("It's a tie\n");
        }
        else if(comp_choice==2)
        {
            printf("Computer wins\n");
        }
        else
        {
            printf("User wins\n");
        }
    }
    else if(user_choice==2)
    {
        if(comp_choice==2)
        {
            printf("It's a tie\n");
        }
        else if(comp_choice==1)
        {
            printf("User wins\n");
        }
        else
        {
            printf("Computer wins\n");
        }
    }
    else
    {
        if(comp_choice==3)
        {
            printf("It's a tie\n");
        }
        else if(comp_choice==1)
        {
            printf("Computer wins\n");
        }
        else
        {
            printf("User wins\n");
        }
    }
    return 0;
}