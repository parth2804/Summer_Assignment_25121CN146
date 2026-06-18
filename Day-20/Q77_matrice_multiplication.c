//matrice multiplication using void function
#include<stdio.h>
void multiply(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2) 
{
    int i, j, k, c[10][10];
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            c[i][j] = 0;
            for (k = 0; k < c1; k++) 
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int r1, c1, r2, c2, i, j, a[10][10], b[10][10];
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2) 
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    multiply(a, b, r1, c1, r2, c2);
    return 0;
}