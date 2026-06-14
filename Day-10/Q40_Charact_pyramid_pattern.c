//Write a program to Print character pyramid.
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA

#include <stdio.h>
int main() 
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = i; j < rows; j++)
            printf(" ");

        for (int k = 0; k < i; k++)
            printf("%c", 'A' + k);

        for (int k = i - 2; k >= 0; k--)
            printf("%c", 'A' + k);

        printf("\n");
    }
    return 0;
}