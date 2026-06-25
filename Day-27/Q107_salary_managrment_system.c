#include <stdio.h>

struct Salary
{
    int id;
    char name[50];
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main()
{
    struct Salary s[100];
    int count = 0;
    int choice, i, searchId, found;

    while (1)
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display All Salary Records\n");
        printf("3. Search Salary Record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &s[count].id);

            printf("Enter Employee Name: ");
            scanf("%s", s[count].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &s[count].basicSalary);

            printf("Enter Bonus: ");
            scanf("%f", &s[count].bonus);

            s[count].totalSalary = s[count].basicSalary + s[count].bonus;

            count++;
            printf("Salary record added successfully!\n");
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                printf("No salary records found!\n");
            }
            else
            {
                printf("\nSalary Records:\n");
                printf("ID\tName\tBasic\tBonus\tTotal\n");

                for (i = 0; i < count; i++)
                {
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",
                           s[i].id,
                           s[i].name,
                           s[i].basicSalary,
                           s[i].bonus,
                           s[i].totalSalary);
                }
            }
        }

        else if (choice == 3)
        {
            if (count == 0)
            {
                printf("No salary records to search!\n");
            }
            else
            {
                found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                for (i = 0; i < count; i++)
                {
                    if (s[i].id == searchId)
                    {
                        printf("\nSalary Record Found:\n");
                        printf("Employee ID   : %d\n", s[i].id);
                        printf("Name          : %s\n", s[i].name);
                        printf("Basic Salary  : %.2f\n", s[i].basicSalary);
                        printf("Bonus         : %.2f\n", s[i].bonus);
                        printf("Total Salary  : %.2f\n", s[i].totalSalary);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Salary record not found!\n");
                }
            }
        }

        else if (choice == 4)
        {
            printf("Exiting program...\n");
            break;
        }

        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}