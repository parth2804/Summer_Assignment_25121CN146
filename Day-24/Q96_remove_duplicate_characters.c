// remove duplicate char
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], newstr[100];
    int k = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int found = 0;

        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            newstr[k] = str[i];
            k++;
        }
    }
    newstr[k] = '\0';
    printf("After removing duplicates: %s", newstr);
    return 0;
}