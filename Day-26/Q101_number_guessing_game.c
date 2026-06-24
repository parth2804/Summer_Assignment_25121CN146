// Number guessing game
// Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    srand(time(0));

    // Random number between 1 and 100
    number = rand() % 100 + 1;

    printf("----- Number Guessing Game -----\n");
    printf("I am thinking of a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");

    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess < 1 || guess > 100)
        {
            printf("Please enter a number between 1 and 100.\n\n");
            continue;
        }

        attempts++;

        if(guess == number)
        {
            printf("\nCorrect! You guessed the number in %d attempts.\n", attempts);
            break;
        }
        else if(guess < number)
        {
            printf("Too low! Try again.\n\n");
        }
        else
        {
            printf("Too high! Try again.\n\n");
        }
    }

    return 0;
}