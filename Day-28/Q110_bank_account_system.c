// Simple Bank Account Management System
#include <stdio.h>

int main()
{
    int choice;
    int accountNo = 12345;
    char name[30] = "Rahul";

    float balance = 5000;
    float amount;

    while(1)
    {
        printf("\n=====================================\n");
        printf("    BANK ACCOUNT MANAGEMENT\n");
        printf("=====================================\n");
        printf("Account Number : %d\n", accountNo);
        printf("Account Holder : %s\n\n", name);

        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");

        if(scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Enter numbers only.\n");
            while(getchar() != '\n');
            continue;
        }

        switch(choice)
        {
            case 1:

                printf("\nCurrent Balance = Rs. %.2f\n", balance);
                break;

            case 2:

                printf("Enter Deposit Amount: ");

                if(scanf("%f", &amount) != 1)
                {
                    printf("Invalid Amount.\n");
                    while(getchar() != '\n');
                    break;
                }

                balance = balance + amount;

                printf("Money Deposited Successfully.\n");
                printf("Current Balance = Rs. %.2f\n", balance);

                break;

            case 3:

                printf("Enter Withdrawal Amount: ");

                if(scanf("%f", &amount) != 1)
                {
                    printf("Invalid Amount.\n");
                    while(getchar() != '\n');
                    break;
                }

                if(amount <= balance)
                {
                    balance = balance - amount;

                    printf("Money Withdrawn Successfully.\n");
                    printf("Current Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }

                break;

            case 4:

                printf("Thank You for Using Our Bank.\n");
                return 0;

            default:

                printf("Invalid Choice.\n");
        }
    }

    return 0;
}