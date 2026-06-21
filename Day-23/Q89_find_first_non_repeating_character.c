//find first non repeating character
#include <stdio.h>
#include <string.h>
int main() 
{
    char string[100];
    int freq[256] = {0};  //ASCII
    printf("Enter a string: ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++) 
    {
        freq[string[i]]++;
    }

    for (int i = 0; string[i] != '\0'; i++) 
    {
        if (freq[string[i]] == 1) 
        {
            printf("First non-repeating character: %c\n", string[i]);
            return 0;
        }
    }
    printf("No non-repeating character found.\n");
    return 0;
}