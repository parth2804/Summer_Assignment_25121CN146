#include <stdio.h>
#include <string.h>

void clearInput()
{
    while (getchar() != '\n');
}

int main()
{
    char str1[100], str2[100];
    int choice;

    while (1)
    {
        printf("\n=================================\n");
        printf("     STRING OPERATIONS MENU\n");
        printf("=================================\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Concatenate Strings\n");
        printf("6. Compare Strings\n");
        printf("7. Reverse String\n");
        printf("8. Exit\n");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            clearInput();
            continue;
        }

        clearInput();   // Remove newline after scanf

        switch (choice)
        {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("String stored successfully.\n");
                break;

            case 2:
                if (strlen(str1) == 0)
                    printf("No string entered.\n");
                else
                    printf("String = %s\n", str1);
                break;

            case 3:
                if (strlen(str1) == 0)
                    printf("No string entered.\n");
                else
                    printf("Length = %d\n", (int)strlen(str1));
                break;

            case 4:
                if (strlen(str1) == 0)
                {
                    printf("No string entered.\n");
                }
                else
                {
                    strcpy(str2, str1);
                    printf("Copied String = %s\n", str2);
                }
                break;

            case 5:
                if (strlen(str1) == 0)
                {
                    printf("Enter the first string first.\n");
                    break;
                }

                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcat(str1, str2);

                printf("Concatenated String = %s\n", str1);
                break;

            case 6:
                if (strlen(str1) == 0)
                {
                    printf("Enter the first string first.\n");
                    break;
                }

                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");

                break;

            case 7:
                if (strlen(str1) == 0)
                {
                    printf("No string entered.\n");
                    break;
                }

                strcpy(str2, str1);

                int i, len = strlen(str2);
                char temp;

                for (i = 0; i < len / 2; i++)
                {
                    temp = str2[i];
                    str2[i] = str2[len - i - 1];
                    str2[len - i - 1] = temp;
                }

                printf("Reversed String = %s\n", str2);
                break;

            case 8:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a number between 1 and 8.\n");
        }
    }

    return 0;
}