#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int count = 0;
    int choice, i, searchId, found;

    while (1)
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &e[count].id);

            printf("Enter Employee Name: ");
            scanf("%s", e[count].name);

            printf("Enter Salary: ");
            scanf("%f", &e[count].salary);

            count++;
            printf("Employee record added successfully!\n");
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                printf("No employee records found!\n");
            }
            else
            {
                printf("\nEmployee Records:\n");
                printf("ID\tName\tSalary\n");

                for (i = 0; i < count; i++)
                {
                    printf("%d\t%s\t%.2f\n", e[i].id, e[i].name, e[i].salary);
                }
            }
        }

        else if (choice == 3)
        {
            if (count == 0)
            {
                printf("No employee records to search!\n");
            }
            else
            {
                found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                for (i = 0; i < count; i++)
                {
                    if (e[i].id == searchId)
                    {
                        printf("\nEmployee Found:\n");
                        printf("Employee ID: %d\n", e[i].id);
                        printf("Name       : %s\n", e[i].name);
                        printf("Salary     : %.2f\n", e[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee not found!\n");
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