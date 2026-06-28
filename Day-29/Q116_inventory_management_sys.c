#include <stdio.h>
#include <string.h>

void clearInput()
{
    while (getchar() != '\n');
}

int main()
{
    char name[100][50];
    int quantity[100];

    int total = 0;
    int choice, i;
    char search[50];
    int found, newQty;

    while (1)
    {
        printf("\n=====================================\n");
        printf("   INVENTORY MANAGEMENT SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Enter a number.\n");
            clearInput();
            continue;
        }

        clearInput();

        switch (choice)
        {
            case 1:

                if (total >= 100)
                {
                    printf("Inventory is full.\n");
                    break;
                }

                printf("Enter Product Name: ");
                fgets(name[total], 50, stdin);
                name[total][strcspn(name[total], "\n")] = '\0';

                printf("Enter Quantity: ");

                if (scanf("%d", &quantity[total]) != 1)
                {
                    printf("Invalid quantity.\n");
                    clearInput();
                    break;
                }

                clearInput();

                total++;

                printf("Product added successfully.\n");
                break;

            case 2:

                if (total == 0)
                {
                    printf("Inventory is empty.\n");
                    break;
                }

                printf("\n---------------------------------\n");
                printf("Product Name\t\tQuantity\n");
                printf("---------------------------------\n");

                for (i = 0; i < total; i++)
                {
                    printf("%-20s %d\n", name[i], quantity[i]);
                }

                break;

            case 3:

                if (total == 0)
                {
                    printf("Inventory is empty.\n");
                    break;
                }

                printf("Enter Product Name to Search: ");
                fgets(search, 50, stdin);
                search[strcspn(search, "\n")] = '\0';

                found = 0;

                for (i = 0; i < total; i++)
                {
                    if (strcmp(name[i], search) == 0)
                    {
                        printf("\nProduct Found!\n");
                        printf("Name : %s\n", name[i]);
                        printf("Quantity : %d\n", quantity[i]);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

                break;

            case 4:

                if (total == 0)
                {
                    printf("Inventory is empty.\n");
                    break;
                }

                printf("Enter Product Name: ");
                fgets(search, 50, stdin);
                search[strcspn(search, "\n")] = '\0';

                found = 0;

                for (i = 0; i < total; i++)
                {
                    if (strcmp(name[i], search) == 0)
                    {
                        printf("Enter New Quantity: ");

                        if (scanf("%d", &newQty) != 1)
                        {
                            printf("Invalid quantity.\n");
                            clearInput();
                            break;
                        }

                        clearInput();

                        quantity[i] = newQty;

                        printf("Quantity updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

                break;

            case 5:

                if (total == 0)
                {
                    printf("Inventory is empty.\n");
                    break;
                }

                printf("Enter Product Name to Delete: ");
                fgets(search, 50, stdin);
                search[strcspn(search, "\n")] = '\0';

                found = 0;

                for (i = 0; i < total; i++)
                {
                    if (strcmp(name[i], search) == 0)
                    {
                        int j;

                        for (j = i; j < total - 1; j++)
                        {
                            strcpy(name[j], name[j + 1]);
                            quantity[j] = quantity[j + 1];
                        }

                        total--;

                        printf("Product deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

                break;

            case 6:

                printf("Exiting Program...\n");
                return 0;

            default:

                printf("Invalid choice! Please enter 1-6.\n");
        }
    }

    return 0;
}