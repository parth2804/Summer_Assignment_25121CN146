// Voting Eligibility Check
#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int age;
    char citizenship;
    char registered;

    printf("=== Voting Eligibility System ===\n\n");

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    if(name[strlen(name) - 1] == '\n')
    {
        name[strlen(name) - 1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen? (y/n): ");
    scanf(" %c", &citizenship);

    printf("Are you registered to vote? (y/n): ");
    scanf(" %c", &registered);

    printf("\n--- Eligibility Check ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    if (age >= 18)
    {
        if (citizenship == 'y' || citizenship == 'Y')
        {
            if (registered == 'y' || registered == 'Y')
            {
                printf("\nELIGIBLE TO VOTE\n");
                printf("Congratulations! You can vote in elections.\n");
            }
            else
            {
                printf("\nNOT ELIGIBLE\n");
                printf("Reason: You must be registered to vote.\n");
            }
        }
        else
        {
            printf("\nNOT ELIGIBLE\n");
            printf("Reason: You must be a citizen to vote.\n");
        }
    }
    else
    {
        printf("\nNOT ELIGIBLE\n");
        printf("Reason: You must be at least 18 years old to vote.\n");
        printf("You need %d more year(s) to become eligible.\n", 18 - age);
    }

    return 0;
}