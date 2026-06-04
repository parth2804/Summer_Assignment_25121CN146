// print character triangle
// A        
// A B
// A B C
// A B C D
// A B C D E

#include <stdio.h>
int main() 
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 0; j < i; j++) 
        {printf("%c", 'A' + j);}

    printf("\n");
    }
    return 0;
}