//check for anagram string
#include <stdio.h>
#include <string.h>

void sort(char str[]) 
{
    int n = strlen(str);

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (str[i] > str[j]) 
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() 
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) 
    {
        printf("Not an anagram\n");
        return 0;
    }

    sort(str1);
    sort(str2);

    if (strcmp(str1, str2) == 0)
        printf("It is an anagram\n");
    else
        printf("Not an anagram\n");
    return 0;
}