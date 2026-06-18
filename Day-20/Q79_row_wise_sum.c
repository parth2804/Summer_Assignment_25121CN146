// matrice row wise sum using void function
#include<stdio.h>
void row_Sum(int a[10][10], int r, int c) 
{
    int sum;
    for (int i = 0; i < r; i++) 
    {
        sum = 0;
        for (int j = 0; j < c; j++) 
        {
            sum += a[i][j];
        }
        printf("Sum of row %d is %d\n", i + 1, sum);
    }
}

int main() 
{
    int r, c, i, j, a[10][10];
    printf("Enter the number of rows and columns of matrix:");
    scanf("%d%d", &r, &c);
    printf("Enter the elements of matrix:");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    row_Sum(a, r, c);
    return 0;
}