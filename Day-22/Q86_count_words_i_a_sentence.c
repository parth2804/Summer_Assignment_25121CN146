// count words in a sentence
#include <stdio.h>

int main() 
{
    char sentence[200];
    int count = 0, inWord = 0;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    for (int i = 0; sentence[i] != '\0'; i++) 
    {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') 
        {
            inWord = 0;
        }
        else 
        {
            if (!inWord) { count++; inWord = 1; }
        }
    }
    
    printf("Word count: %d\n", count);
    return 0;
}
