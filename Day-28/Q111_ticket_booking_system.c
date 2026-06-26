// Simple Ticket Booking System
#include <stdio.h>
#include <string.h>

int main()
{
    int trainNo[100];
    char name[100][30];
    int seatNo[100];

    int total = 0;
    int choice;
    int i;
    int found;
    char search[30];

    while(1)
    {
        printf("\n=====================================\n");
        printf("      TICKET BOOKING SYSTEM\n");
        printf("=====================================\n");
        printf("1. Book Ticket\n");
        printf("2. View All Bookings\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");

        if(scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Enter numbers only.\n");
            while(getchar() != '\n');
            continue;
        }

        switch(choice)
        {
            case 1:

                if(total == 100)
                {
                    printf("Booking List is Full.\n");
                }
                else
                {
                    printf("Enter Train Number: ");

                    if(scanf("%d", &trainNo[total]) != 1)
                    {
                        printf("Invalid Train Number.\n");
                        while(getchar() != '\n');
                        break;
                    }

                    printf("Enter Passenger Name: ");
                    scanf("%s", name[total]);

                    printf("Enter Seat Number: ");

                    if(scanf("%d", &seatNo[total]) != 1)
                    {
                        printf("Invalid Seat Number.\n");
                        while(getchar() != '\n');
                        break;
                    }

                    total++;

                    printf("Ticket Booked Successfully.\n");
                }

                break;

            case 2:

                if(total == 0)
                {
                    printf("No Bookings Found.\n");
                }
                else
                {
                    printf("\n========== BOOKING LIST ==========\n");

                    for(i = 0; i < total; i++)
                    {
                        printf("Passenger = %s\n", name[i]);
                        printf("Train No  = %d\n", trainNo[i]);
                        printf("Seat No   = %d\n\n", seatNo[i]);
                    }
                }

                break;

            case 3:

                if(total == 0)
                {
                    printf("No Bookings Found.\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Passenger Name: ");
                    scanf("%s", search);

                    for(i = 0; i < total; i++)
                    {
                        if(strcmp(name[i], search) == 0)
                        {
                            int j;

                            for(j = i; j < total - 1; j++)
                            {
                                trainNo[j] = trainNo[j + 1];
                                strcpy(name[j], name[j + 1]);
                                seatNo[j] = seatNo[j + 1];
                            }

                            total--;

                            printf("Ticket Cancelled Successfully.\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Passenger Not Found.\n");
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