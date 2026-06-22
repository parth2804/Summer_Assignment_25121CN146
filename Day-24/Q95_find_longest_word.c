//find longest word 
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char word[50];
    int start = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int wstart = 0;
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if (len > max)
            {
                max = len;
                start = wstart;
            }

            wstart = i + 1;
            len = 0;
        }
    }
    //last check
    if (len > max)
    {
        max = len;
        start = wstart;
    }

    strncpy(word, str + start, max);
    word[max] = '\0';

    printf("Longest word: %s", word);

    return 0;
}