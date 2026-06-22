#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char longest[50];
    int start = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int wordStart = 0;
    int wordLen = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            wordLen++;
        }
        else
        {
            if (wordLen > maxLen)
            {
                maxLen = wordLen;
                start = wordStart;
            }

            wordStart = i + 1;
            wordLen = 0;
        }
    }

    // Handle last word if string doesn't end with space
    if (wordLen > maxLen)
    {
        maxLen = wordLen;
        start = wordStart;
    }

    strncpy(longest, str + start, maxLen);
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);

    return 0;
}