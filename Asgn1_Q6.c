/*Q6. WAP to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data: 7 9
Expected Output: The coordinate point (7,9) lies in the First quadrant.*/

#include<stdio.h>
int main() 
{
    int x, y;
    printf("Enter the x and y coordinate:\n");
    scanf("%d %d", &x, &y);
    
    if (x == 0 && y == 0) 
    {
        printf("The point (%d,%d) is at the origin.\n",x,y);
    } 
    else if (x == 0) 
    {
        printf("The point (%d,%d) lies on the Y-axis.\n",x,y);
    } 
    else if (y == 0) 
    {
        printf("The point (%d,%d) lies on the X-axis.\n",x,y);
    } 
    else if (x > 0 && y > 0) 
    {
        printf("The point (%d,%d) lies in Quadrant I.\n",x,y);
    } 
    else if (x < 0 && y > 0) 
    {
        printf("The point (%d,%d) lies in Quadrant II.\n",x,y);
    } 
    else if (x < 0 && y < 0) 
    {
        printf("The point (%d,%d) lies in Quadrant III.\n",x,y);
    } 
    else if (x > 0 && y < 0) 
    {
        printf("The point (%d,%d) lies in Quadrant IV.\n",x,y);
    }

    return 0;

}