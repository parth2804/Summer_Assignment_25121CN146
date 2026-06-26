// Contact Management System
#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][30];
    char search[30];
    long long phone[10];

    int total = 0;
    int choice;
    int i, j;
    int found;

    while(1)
    {
        printf("\n=====================================\n");
        printf("    CONTACT MANAGEMENT SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

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

                if(total == 10)
                {
                    printf("Contact List is Full.\n");
                }
                else
                {
                    printf("Enter Name: ");
                    scanf("%s", name[total]);

                    printf("Enter Phone Number: ");

                    if(scanf("%lld", &phone[total]) != 1)
                    {
                        printf("Invalid Phone Number.\n");
                        while(getchar() != '\n');
                        break;
                    }

                    total++;

                    printf("Contact Added Successfully.\n");
                }

                break;

            case 2:

                if(total == 0)
                {
                    printf("No Contacts Found.\n");
                }
                else
                {
                    printf("\n========== CONTACT LIST ==========\n");

                    for(i = 0; i < total; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name  : %s\n", name[i]);
                        printf("Phone : %lld\n", phone[i]);
                    }
                }

                break;

            case 3:

                if(total == 0)
                {
                    printf("No Contacts Found.\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Name to Search: ");
                    scanf("%s", search);

                    for(i = 0; i < total; i++)
                    {
                        if(strcmp(name[i], search) == 0)
                        {
                            printf("\nContact Found\n");
                            printf("Name  : %s\n", name[i]);
                            printf("Phone : %lld\n", phone[i]);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Contact Not Found.\n");
                    }
                }

                break;

            case 4:

                if(total == 0)
                {
                    printf("No Contacts Found.\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Name to Delete: ");
                    scanf("%s", search);

                    for(i = 0; i < total; i++)
                    {
                        if(strcmp(name[i], search) == 0)
                        {
                            for(j = i; j < total - 1; j++)
                            {
                                strcpy(name[j], name[j + 1]);
                                phone[j] = phone[j + 1];
                            }

                            total--;

                            printf("Contact Deleted Successfully.\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Contact Not Found.\n");
                    }
                }

                break;

            case 5:

                printf("Thank You!\n");
                return 0;

            default:

                printf("Invalid Choice.\n");
        }
    }

    return 0;
}