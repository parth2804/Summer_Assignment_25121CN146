// find and print common characters
#include <stdio.h>
int main()
{
    char str[100];
    int i, j, found, before;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Common characters: ");
    for(i = 0; str[i] != '\0'; i++)
    {
        before = 0;
        found = 0;
        //if appeared before
        for(j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                before = 1;
                break;
            }
        }
        if(before == 1)
            continue;
        // if appears later
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 1)
            printf("%c ", str[i]);
    }
    return 0;
}