#include <stdio.h>

// Basic Calculator
int main()
{
    // Declaring variables
    int choice;
    float num1, num2, result;

    // Displaying the menu
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Asking user for the input
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Using switch case to solve the problem
    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("The sum of %.2f and %.2f is %.2f", num1, num2, result);
        break;
    case 2:
        result = num1 - num2;
        printf("The difference between %.2f and %.2f is %.2f", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("The product of %.2f and %.2f is %.2f", num1, num2, result);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Division by 0 is not possible");
        }
        else
        {
            result = num1 / num2;
            printf("The division of %.2f and %.2f is %.2f", num1, num2, result);
        }
        break;
    default:
        printf("Invalid choice. Please choose a valid operation.\n");
    }
    return 0;
}