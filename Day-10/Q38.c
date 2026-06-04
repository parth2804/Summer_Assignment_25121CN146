//Write a program to Print reverse pyramid.
//*********
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main() 
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) 
    {
        for (int j = i; j < rows; j++) 
        {printf(" ");}
        
        for (int k = 1; k <= (2 * i - 1); k++) 
        {printf("*");}

        printf("\n");
    }
    return 0;
}