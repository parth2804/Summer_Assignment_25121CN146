//check string rotation 
#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    char temp[200];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);

    strcpy(temp, str1);
    strcat(temp, str1);
    
    if (strstr(temp, str2) != NULL)
        printf("YES, it's a rotation\n");
    else
        printf("NO, it's not a rotation\n");
    
    return 0;
}