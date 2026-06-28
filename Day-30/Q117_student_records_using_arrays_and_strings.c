#include <stdio.h>

void clearInput()
{
    while (getchar() != '\n');
}

int main()
{
    int roll[50], total = 0;
    char name[50][20];
    float marks[50];

    int choice, i, searchRoll, found;

    while (1)
    {
        printf("\n==================================\n");
        printf("     STUDENT RECORD SYSTEM\n");
        printf("==================================\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            clearInput();
            continue;
        }

        switch (choice)
        {
            case 1:

                if (total >= 50)
                {
                    printf("Record is full!\n");
                    break;
                }

                printf("Enter Roll Number: ");

                if (scanf("%d", &roll[total]) != 1)
                {
                    printf("Invalid Roll Number!\n");
                    clearInput();
                    break;
                }

                printf("Enter Name: ");
                scanf("%19s", name[total]);

                printf("Enter Marks: ");

                if (scanf("%f", &marks[total]) != 1)
                {
                    printf("Invalid Marks!\n");
                    clearInput();
                    break;
                }

                total++;
                printf("Student Added Successfully!\n");
                break;

            case 2:

                if (total == 0)
                {
                    printf("No Records Found!\n");
                    break;
                }

                printf("\n-----------------------------------\n");
                printf("Roll\tName\t\tMarks\n");
                printf("-----------------------------------\n");

                for (i = 0; i < total; i++)
                {
                    printf("%d\t%s\t\t%.2f\n", roll[i], name[i], marks[i]);
                }

                break;

            case 3:

                if (total == 0)
                {
                    printf("No Records Found!\n");
                    break;
                }

                printf("Enter Roll Number: ");

                if (scanf("%d", &searchRoll) != 1)
                {
                    printf("Invalid Roll Number!\n");
                    clearInput();
                    break;
                }

                found = 0;

                for (i = 0; i < total; i++)
                {
                    if (roll[i] == searchRoll)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %.2f\n", marks[i]);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Student Not Found!\n");
                }

                break;

            case 4:

                printf("Exiting Program...\n");
                return 0;

            default:

                printf("Invalid Choice! Please enter 1 to 4.\n");
        }
    }

    return 0;
}