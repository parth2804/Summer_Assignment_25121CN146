//sum of diagonals of matrice
#include <stdio.h>
int main()
{
    int n, i, j;
    int a[10][10];
    int leftSum = 0, rightSum = 0, bothSum = 0;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        leftSum += a[i][i];
        rightSum += a[i][n - 1 - i];
        bothSum += a[i][i];
        if (i != n - 1 - i)
        {
            bothSum += a[i][n - 1 - i];
        }
    }
    printf("Left diagonal sum = %d\n", leftSum);
    printf("Right diagonal sum = %d\n", rightSum);
    printf("Both diagonals sum = %d\n", bothSum);
    return 0;
}