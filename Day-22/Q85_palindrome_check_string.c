// palindrome check for a string
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], reversed[100];
    int len, i;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = len - 1; i >= 0; i--)   // from Q82_reverse_a_string.c
    {
        reversed[len - 1 - i] = str[i];
    }
    reversed[len] = '\0';  

    printf("Original : %s\n", str);
    printf("Reversed : %s\n", reversed);

    if (strcmp(str, reversed) == 0)
        printf("=> Palindrome!\n");
    else
        printf("=> Not a Palindrome.\n");
    return 0;
}