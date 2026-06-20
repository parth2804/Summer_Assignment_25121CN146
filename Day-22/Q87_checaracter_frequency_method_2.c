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
    
    for (int i = 0; i < 26; i++) 
    {
        if (Lower[i] > 0 || Upper[i] > 0)
        {
            printf("'%c' = %d  '%c' = %d\n", 'a'+i, Lower[i], 'A'+i, Upper[i]);
        }
    }
    
    return 0;
}