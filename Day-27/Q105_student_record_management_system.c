#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    float sgpa;
};

int main()
{
    const int MAX_STUDENTS = 100;
    struct Student records[MAX_STUDENTS];
    int currentCount = 0;
    int choice;

    while (1)
    {
        printf("=========================================\n");
        printf("    STUDENT RECORD MANAGEMENT SYSTEM     \n");
        printf("=========================================\n");
        printf("1. Add New Student Record\n");
        printf("2. Display All Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit System\n");
        printf("=========================================\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        printf("\n");

        if (choice == 1)
        {
            if (currentCount >= MAX_STUDENTS)
            {
                printf("Error: Storage capacity full!\n\n");
            }
            else
            {
                printf("Enter Roll Number: ");
                scanf("%d", &records[currentCount].rollNumber);

                printf("Enter Student Name (No spaces): ");
                scanf("%s", records[currentCount].name);

                printf("Enter SGPA: ");
                scanf("%f", &records[currentCount].sgpa);

                currentCount++;
                printf("--> Record added successfully!\n\n");
            }
        }

        else if (choice == 2)
        {
            if (currentCount == 0)
            {
                printf("No student records found in the database.\n\n");
            }
            else
            {
                int i;
                printf("-----------------------------------------\n");
                printf("Roll No.\tName\t\tSGPA\n");
                printf("-----------------------------------------\n");

                for (i = 0; i < currentCount; i++)
                {
                    printf("%d\t\t%s\t\t%.2f\n",
                           records[i].rollNumber,
                           records[i].name,
                           records[i].sgpa);
                }

                printf("-----------------------------------------\n\n");
            }
        }

        else if (choice == 3)
        {
            if (currentCount == 0)
            {
                printf("Database empty. Nothing to search.\n\n");
            }
            else
            {
                int searchRoll;
                int found = 0;
                int i;

                printf("Enter Roll Number to search: ");
                scanf("%d", &searchRoll);

                for (i = 0; i < currentCount; i++)
                {
                    if (records[i].rollNumber == searchRoll)
                    {
                        printf("\n--> Record Found!\n");
                        printf("Roll Number: %d\n", records[i].rollNumber);
                        printf("Name       : %s\n", records[i].name);
                        printf("SGPA       : %.2f\n\n", records[i].sgpa);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("--> Student with Roll Number %d not found.\n\n", searchRoll);
                }
            }
        }

        else if (choice == 4)
        {
            printf("Exiting management system. Goodbye!\n");
            break;
        }

        else
        {
            printf("Invalid selection! Please pick a number from 1 to 4.\n\n");
        }
    }

    return 0;
}