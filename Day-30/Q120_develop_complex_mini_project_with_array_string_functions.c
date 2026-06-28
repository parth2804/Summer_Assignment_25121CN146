#include <stdio.h>
#include <string.h>

#define MAX 100

/* ========================================
   STRUCTURE DEFINITION
   ======================================== */

struct Movie
{
    int id;
    char title[100];
    char director[100];
    char genre[50];
    int year;
    float rating;
    int duration;
};

/* ========================================
   GLOBAL VARIABLES
   ======================================== */

struct Movie movies[MAX];
int count = 0;

/* ========================================
   INPUT VALIDATION FUNCTIONS
   ======================================== */

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int getValidInteger(const char *prompt)
{
    int value;
    int result;

    while (1)
    {
        printf("%s", prompt);
        result = scanf("%d", &value);

        if (result == 1)
        {
            clearInputBuffer();
            return value;
        }
        else
        {
            clearInputBuffer();
            printf("ERROR: Invalid input! Please enter a valid number.\n");
        }
    }
}

float getValidFloat(const char *prompt)
{
    float value;
    int result;

    while (1)
    {
        printf("%s", prompt);
        result = scanf("%f", &value);

        if (result == 1)
        {
            clearInputBuffer();
            return value;
        }
        else
        {
            clearInputBuffer();
            printf("ERROR: Invalid input! Please enter a valid number.\n");
        }
    }
}

void getValidString(const char *prompt, char *buffer, int maxSize)
{
    printf("%s", prompt);
    fgets(buffer, maxSize, stdin);
    buffer[strcspn(buffer, "\n")] = 0;

    if (strlen(buffer) == 0)
    {
        printf("ERROR: Input cannot be empty! Please try again.\n");
        getValidString(prompt, buffer, maxSize);
    }
}

/* ========================================
   HELPER FUNCTION
   ======================================== */

int findById(int id)
{
    for (int i = 0; i < count; i++)
    {
        if (movies[i].id == id)
        {
            return i;
        }
    }
    return -1;
}

/* ========================================
   ADD MOVIE FUNCTION
   ======================================== */

void addMovie()
{
    if (count >= MAX)
    {
        printf("Database full!\n");
        return;
    }

    printf("\nEnter Movie Details:\n");

    movies[count].id = getValidInteger("ID: ");

    getValidString("Title: ", movies[count].title, 100);

    getValidString("Director: ", movies[count].director, 100);

    getValidString("Genre: ", movies[count].genre, 50);

    movies[count].year = getValidInteger("Year: ");

    movies[count].rating = getValidFloat("Rating (0-10): ");

    movies[count].duration = getValidInteger("Duration (minutes): ");

    count++;
    printf("Movie added successfully!\n");
}

/* ========================================
   DISPLAY ALL MOVIES FUNCTION
   ======================================== */

void displayMovies()
{
    if (count == 0)
    {
        printf("No movies in database.\n");
        return;
    }

    printf("\n========== ALL MOVIES ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("\n------------------------------\n");
        printf("ID:       %d\n", movies[i].id);
        printf("Title:    %s\n", movies[i].title);
        printf("Director: %s\n", movies[i].director);
        printf("Genre:    %s\n", movies[i].genre);
        printf("Year:     %d\n", movies[i].year);
        printf("Rating:   %.1f / 10\n", movies[i].rating);
        printf("Duration: %d minutes\n", movies[i].duration);
    }

    printf("\n==============================\n");
}

/* ========================================
   SEARCH BY ID FUNCTION
   ======================================== */

void searchByID()
{
    int id = getValidInteger("\nEnter Movie ID: ");

    int index = findById(id);

    if (index == -1)
    {
        printf("Movie not found.\n");
    }
    else
    {
        printf("\nFound Movie:\n");
        printf("Title:  %s\n", movies[index].title);
        printf("Rating: %.1f\n", movies[index].rating);
    }
}

/* ========================================
   SEARCH BY TITLE FUNCTION
   ======================================== */

void searchByTitle()
{
    char title[100];

    getValidString("\nEnter Movie Title: ", title, 100);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(movies[i].title, title) == 0)
        {
            printf("Found: ID %d - %s\n", movies[i].id, movies[i].title);
            return;
        }
    }

    printf("Movie not found.\n");
}

/* ========================================
   UPDATE MOVIE FUNCTION
   ======================================== */

void updateMovie()
{
    int id = getValidInteger("\nEnter Movie ID to update: ");

    int index = findById(id);

    if (index == -1)
    {
        printf("Movie not found.\n");
        return;
    }

    printf("\nUpdate Movie Details:\n");

    getValidString("New Title: ", movies[index].title, 100);

    getValidString("New Director: ", movies[index].director, 100);

    getValidString("New Genre: ", movies[index].genre, 50);

    movies[index].year = getValidInteger("New Year: ");

    movies[index].rating = getValidFloat("New Rating: ");

    movies[index].duration = getValidInteger("New Duration: ");

    printf("Movie updated successfully!\n");
}

/* ========================================
   DELETE MOVIE FUNCTION
   ======================================== */

void deleteMovie()
{
    int id = getValidInteger("\nEnter Movie ID to delete: ");

    int index = findById(id);

    if (index == -1)
    {
        printf("Movie not found.\n");
        return;
    }

    for (int j = index; j < count - 1; j++)
    {
        movies[j] = movies[j + 1];
    }

    count--;
    printf("Movie deleted successfully!\n");
}

/* ========================================
   SORT FUNCTIONS
   ======================================== */

void sortByTitle()
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (strcmp(movies[j].title, movies[j + 1].title) > 0)
            {
                struct Movie temp = movies[j];
                movies[j] = movies[j + 1];
                movies[j + 1] = temp;
            }
        }
    }
    printf("Movies sorted by title.\n");
}

void sortByRating()
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (movies[j].rating < movies[j + 1].rating)
            {
                struct Movie temp = movies[j];
                movies[j] = movies[j + 1];
                movies[j + 1] = temp;
            }
        }
    }
    printf("Movies sorted by rating (highest first).\n");
}

void sortByYear()
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (movies[j].year < movies[j + 1].year)
            {
                struct Movie temp = movies[j];
                movies[j] = movies[j + 1];
                movies[j + 1] = temp;
            }
        }
    }
    printf("Movies sorted by year (newest first).\n");
}

/* ========================================
   STATISTICS FUNCTIONS
   ======================================== */

void findHighestRated()
{
    if (count == 0)
    {
        printf("No movies to display.\n");
        return;
    }

    int maxIndex = 0;

    for (int i = 1; i < count; i++)
    {
        if (movies[i].rating > movies[maxIndex].rating)
        {
            maxIndex = i;
        }
    }

    printf("\nHighest Rated Movie:\n");
    printf("Title:  %s\n", movies[maxIndex].title);
    printf("Rating: %.1f / 10\n", movies[maxIndex].rating);
}

void searchByGenre()
{
    char genre[50];

    getValidString("\nEnter Genre: ", genre, 50);

    printf("\nMovies in '%s' genre:\n", genre);

    int found = 0;

    for (int i = 0; i < count; i++)
    {
        if (strcmp(movies[i].genre, genre) == 0)
        {
            printf("- %s (%d)\n", movies[i].title, movies[i].year);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No movies found in this genre.\n");
    }
}

void calculateAverageRating()
{
    if (count == 0)
    {
        printf("No movies to calculate.\n");
        return;
    }

    float sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += movies[i].rating;
    }

    printf("\nAverage Rating: %.2f / 10\n", sum / count);
}

/* ========================================
   DISPLAY MENU FUNCTION
   ======================================== */

void displayMenu()
{
    printf("\n================================\n");
    printf("    MOVIE DATABASE SYSTEM\n");
    printf("================================\n");
    printf("1.  Add Movie\n");
    printf("2.  Display All Movies\n");
    printf("3.  Search by ID\n");
    printf("4.  Search by Title\n");
    printf("5.  Update Movie\n");
    printf("6.  Delete Movie\n");
    printf("7.  Sort by Title\n");
    printf("8.  Sort by Rating\n");
    printf("9.  Sort by Year\n");
    printf("10. Find Highest Rated\n");
    printf("11. Search by Genre\n");
    printf("12. Average Rating\n");
    printf("13. Exit\n");
    printf("================================\n");
    printf("Enter your choice: ");
}

/* ========================================
   MAIN PROGRAM
   ======================================== */

int main()
{
    int choice;

    do
    {
        displayMenu();
        choice = getValidInteger("");

        switch (choice)
        {
            case 1:
                addMovie();
                break;

            case 2:
                displayMovies();
                break;

            case 3:
                searchByID();
                break;

            case 4:
                searchByTitle();
                break;

            case 5:
                updateMovie();
                break;

            case 6:
                deleteMovie();
                break;

            case 7:
                sortByTitle();
                break;

            case 8:
                sortByRating();
                break;

            case 9:
                sortByYear();
                break;

            case 10:
                findHighestRated();
                break;

            case 11:
                searchByGenre();
                break;

            case 12:
                calculateAverageRating();
                break;

            case 13:
                printf("\nGoodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 13);

    return 0;
}