// Library Management System
#include <stdio.h>
#include <string.h>

int main()
{
    char bookName[10][30];
    char search[30];
    int bookID[10];

    int totalBooks = 0;
    int choice;
    int i, j;
    int found;

    while(1)
    {
        printf("\n=====================================\n");
        printf("      LIBRARY MANAGEMENT SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Issue Book\n");
        printf("4. Exit\n");

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

                if(totalBooks == 10)
                {
                    printf("Library is Full.\n");
                }
                else
                {
                    printf("Enter Book ID: ");

                    if(scanf("%d", &bookID[totalBooks]) != 1)
                    {
                        printf("Invalid Book ID.\n");
                        while(getchar() != '\n');
                        break;
                    }

                    printf("Enter Book Name: ");
                    scanf("%s", bookName[totalBooks]);

                    totalBooks++;

                    printf("Book Added Successfully.\n");
                }

                break;

            case 2:

                if(totalBooks == 0)
                {
                    printf("No Books Available.\n");
                }
                else
                {
                    printf("\n========== BOOK LIST ==========\n");

                    for(i = 0; i < totalBooks; i++)
                    {
                        printf("Book ID   = %d\n", bookID[i]);
                        printf("Book Name = %s\n\n", bookName[i]);
                    }
                }

                break;

            case 3:

                if(totalBooks == 0)
                {
                    printf("No Books Available.\n");
                }
                else
                {
                    printf("\nAvailable Books\n");

                    for(i = 0; i < totalBooks; i++)
                    {
                        printf("%d. %s (ID: %d)\n",
                               i + 1,
                               bookName[i],
                               bookID[i]);
                    }

                    found = 0;

                    printf("\nEnter Book Name to Issue: ");
                    scanf("%s", search);

                    for(i = 0; i < totalBooks; i++)
                    {
                        if(strcmp(bookName[i], search) == 0)
                        {
                            for(j = i; j < totalBooks - 1; j++)
                            {
                                strcpy(bookName[j], bookName[j + 1]);
                                bookID[j] = bookID[j + 1];
                            }

                            totalBooks--;

                            printf("Book Issued Successfully.\n");
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Book Not Found.\n");
                    }
                }

                break;

            case 4:

                printf("Thank You!\n");
                return 0;

            default:

                printf("Invalid Choice.\n");
        }
    }

    return 0;
}