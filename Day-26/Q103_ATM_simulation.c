#include <stdio.h>

float balance = 10000.00;
int pin = 1234;

void checkBalance()
{
    printf("\nCurrent Balance: Rs. %f\n", balance);
}

void deposit()
{
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if(amount > 0)
    {
        balance += amount;
        printf("Rs. %f deposited successfully.\n", amount);
        printf("New Balance: Rs. %f\n", balance);
    }
    else
    {
        printf("Invalid amount!\n");
    }
}

void withdraw()
{
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount <= 0)
    {
        printf("Invalid amount!\n");
    }
    else if(amount > balance)
    {
        printf("Insufficient Balance!\n");
    }
    else
    {
        balance -= amount;
        printf("Please collect your cash.\n");
        printf("Remaining Balance: Rs. %f\n", balance);
    }
}

void changePIN()
{
    int oldPin, newPin, confirmPin;

    printf("Enter current PIN: ");
    scanf("%d", &oldPin);

    if(oldPin != pin)
    {
        printf("Incorrect PIN!\n");
        return;
    }

    printf("Enter new PIN: ");
    scanf("%d", &newPin);

    printf("Confirm new PIN: ");
    scanf("%d", &confirmPin);

    if(newPin != confirmPin)
    {
        printf("PINs do not match!\n");
    }
    else if(newPin == pin)
    {
        printf("New PIN cannot be same as old PIN!\n");
    }
    else
    {
        pin = newPin;
        printf("PIN changed successfully!\n");
    }
}

int main()
{
    int enteredPin;
    int choice;
    int attempts = 3;

    printf("=================================\n");
    printf("         ATM SIMULATION\n");
    printf("=================================\n");

    while(attempts > 0)
    {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if(enteredPin == pin)
        {
            printf("Login Successful!\n");
            break;
        }

        attempts--;
        printf("Wrong PIN! Attempts left: %d\n", attempts);
    }

    if(attempts == 0)
    {
        printf("\nCard Blocked!\n");
        return 0;
    }

    while(1)
    {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                checkBalance();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                changePIN();
                break;

            case 5:
                printf("\nThank you for using our ATM!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}