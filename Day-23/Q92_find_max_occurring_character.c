// character frequency
#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[200];
    int Lower[26] = {0};
    int Upper[26] = {0};
    int len;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    len = strlen(sentence);

    // count frequency
    for (int i = 0; i < len; i++) 
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            Lower[sentence[i] - 'a']++;
        }
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            Upper[sentence[i] - 'A']++;
        }
    }

    // print frequencies
    printf("\nCharacter Frequencies:\n");
    for (int i = 0; i < 26; i++)
    {
        if (Lower[i] > 0)
            printf("'%c' = %d\n", 'a' + i, Lower[i]);
        if (Upper[i] > 0)
            printf("'%c' = %d\n", 'A' + i, Upper[i]);
    }

    // max occurring character
    int max = 0;
    char ch = '\0';

    for (int i = 0; i < 26; i++) 
    {
        if (Lower[i] > max)
        {
            max = Lower[i];
            ch = 'a' + i;
        }

        if (Upper[i] > max)
        {
            max = Upper[i];
            ch = 'A' + i;
        }
    }

    printf("\nMax occurring character: %c\n", ch);
    printf("Count: %d\n", max);

    return 0;
}