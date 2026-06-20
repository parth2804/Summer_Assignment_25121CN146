//CHARACTER FREQUENCY as per ASCII values
#include <stdio.h>

int main() 
{
    char sentence[200];
    int freq[256] = {0};
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    for (int i = 0; sentence[i] != '\0'; i++) 
    {
        if (sentence[i] != '\n')
        {
            freq[(int)sentence[i]]++;
        }
    }
    
    printf("\nCharacter Frequencies:\n");
    for (int i = 0; i < 256; i++) 
    {
        if (freq[i] > 0) 
        {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }
    return 0;
}