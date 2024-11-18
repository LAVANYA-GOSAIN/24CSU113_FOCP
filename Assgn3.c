// Q. CALCULATOR

#include <stdio.h>
#include <math.h>

double num1, num2, num;

void addition() 
{
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 + num2);
}

void subtraction() 
{
    printf("Enter two numbers to subtract: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 - num2);
}

void multiplication() 
{
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &num1, &num2); 
    printf("Result: %.2lf\n", num1 * num2);
}

void division() 
{
    printf("Enter two numbers to divide: ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 != 0) {
        printf("Result: %.2lf\n", num1 / num2);
    } else {
        printf("Error: Division by zero is undefined.\n");
    }
}

void logarithm() 
{
    printf("Enter a number to find its logarithm (base 10): ");
    scanf("%lf", &num);
    if (num > 0) 
    {
        printf("Result: %.2lf\n", log10(num));
    } 
    else 
    {
        printf("Error: Logarithm undefined for non-positive values.\n");
    }
}

void squareroot() 
{
    printf("Enter a number to find its square root: ");
    scanf("%lf", &num);
    if (num >= 0) 
    {
        printf("Result: %.2lf\n", sqrt(num));
    } 
    else 
    {
        printf("Error: Square root undefined for negative values.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\nSIMPLE CALCULATOR\n\n");
        printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Logarithmic Value\n 6. Square root\n 7. End\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                logarithm();
                break;
            case 6:
                squareroot();
                break;
            case 7:
                printf("Exiting calculator....\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
