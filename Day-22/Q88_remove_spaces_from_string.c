// remove spaces from string
#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[200];
    char result[200];
    int j = 0 , i;
    int len;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    len = strlen(sentence);
    
    for (i = 0; i < len; i++) 
    {
        if (sentence[i] != ' ' && sentence[i] != '\n') 
        {
            result[j] = sentence[i];
            j++;
        }
    }
    
    result[j] = '\0';
    
    printf("Without spaces: %s\n", result);
    
    return 0;
}