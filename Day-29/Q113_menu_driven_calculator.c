#include <stdio.h>

void clearInput()
{
    while (getchar() != '\n');
}

int main()
{
    int choice;
    float num1, num2, result;

    while (1)
    {
        printf("\n=============================\n");
        printf("      MENU CALCULATOR\n");
        printf("=============================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            clearInput();
            continue;
        }

        if (choice == 5)
        {
            printf("Exiting Calculator...\n");
            break;
        }

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter first number: ");

            if (scanf("%f", &num1) != 1)
            {
                printf("Invalid input! Please enter a valid number.\n");
                clearInput();
                continue;
            }

            printf("Enter second number: ");

            if (scanf("%f", &num2) != 1)
            {
                printf("Invalid input! Please enter a valid number.\n");
                clearInput();
                continue;
            }
        }

        switch (choice)
        {
            case 1:
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                }
                else
                {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}