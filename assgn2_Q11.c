//Q11. WAP to implement Insert -Front, any position in between & end in an array. Print
//the array before insert & after insert.

#include <stdio.h> 

int main() 
{ 
int arr[50];
int N; 
int pos, val, i; 

printf("Enter the size of the array: ");
scanf("%d", &N);
    
printf("Enter the elements:\n");
for (int i = 0; i < N; i++) 
{
    scanf("%d", &arr[i]);
}

printf("Original Array: "); 
for (i = 0; i < N; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
printf("Enter the number to be inserted in front: ");
scanf("%d",&val);
for (i = N; i > 0; i--) { 
arr[i] = arr[i - 1]; 
} 
arr[0] = val; 
N++; 
printf("After Insert at Front: "); 
for (i = 0; i < N; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 

printf("Enter the position: ");
scanf("%d",&pos);
printf("Enter the value: ");
scanf("%d",&val);

for (i = N; i > pos - 1; i--) 
{ 
arr[i] = arr[i - 1]; 
} 
arr[pos - 1] = val; 
N++; 
printf("After Insert at Position %d: ", pos); 
for (i = 0; i < N; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
printf("Enter the value to print at the end: ");
scanf("%d",&val);

arr[N] = val; 
N++; 
printf("After Insert at End: "); 
for (i = 0; i < N; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
return 0; 
}