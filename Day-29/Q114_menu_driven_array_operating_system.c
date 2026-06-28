#include <stdio.h>

void clearInput()
{
    while (getchar() != '\n');
}

int main()
{
    int arr[100];
    int n = 0;
    int choice, i, pos, value, found;

    while (1)
    {
        printf("\n=================================\n");
        printf("     ARRAY OPERATIONS MENU\n");
        printf("=================================\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Update Element\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            clearInput();
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("Enter number of elements (1-100): ");

                if (scanf("%d", &n) != 1)
                {
                    printf("Invalid input!\n");
                    clearInput();
                    n = 0;
                    break;
                }

                if (n < 1 || n > 100)
                {
                    printf("Invalid size!\n");
                    n = 0;
                    break;
                }

                printf("Enter %d elements:\n", n);

                for (i = 0; i < n; i++)
                {
                    if (scanf("%d", &arr[i]) != 1)
                    {
                        printf("Invalid input!\n");
                        clearInput();
                        n = i;
                        break;
                    }
                }
                break;

            case 2:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    printf("Array Elements:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("%d ", arr[i]);
                    }

                    printf("\n");
                }
                break;

            case 3:
                if (n >= 100)
                {
                    printf("Array is full.\n");
                    break;
                }

                printf("Enter position (1-%d): ", n + 1);

                if (scanf("%d", &pos) != 1)
                {
                    printf("Invalid input!\n");
                    clearInput();
                    break;
                }

                if (pos < 1 || pos > n + 1)
                {
                    printf("Invalid position.\n");
                    break;
                }

                printf("Enter value: ");

                if (scanf("%d", &value) != 1)
                {
                    printf("Invalid input!\n");
                    clearInput();
                    break;
                }

                for (i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                printf("Element inserted successfully.\n");
                break;

            case 4:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter position to delete (1-%d): ", n);

                if (scanf("%d", &pos) != 1)
                {
                    printf("Invalid input!\n");
                    clearInput();
                    break;
                }

                if (pos < 1 || pos > n)
                {
                    printf("Invalid position.\n");
                    break;
                }

                for (i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                printf("Element deleted successfully.\n");
                break;

            case 5:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter element to search: ");

                if (scanf("%d", &value) != 1)
                {
                    printf("Invalid input!\n");
                    clearInput();
                    break;
                }

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (arr[i] == value)
                    {
                        printf("Element found at position %d.\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                {
                    printf("Element not found.\n");
                }

                break;

            case 6:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter position to update (1-%d): ", n);

                if (scanf("%d", &pos) != 1)
                {
                    printf("Invalid input!\n");
                    clearInput();
                    break;
                }

                if (pos < 1 || pos > n)
                {
                    printf("Invalid position.\n");
                    break;
                }

                printf("Enter new value: ");

                if (scanf("%d", &value) != 1)
                {
                    printf("Invalid input!\n");
                    clearInput();
                    break;
                }

                arr[pos - 1] = value;

                printf("Element updated successfully.\n");
                break;

            case 7:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a number between 1 and 7.\n");
        }
    }

    return 0;
}