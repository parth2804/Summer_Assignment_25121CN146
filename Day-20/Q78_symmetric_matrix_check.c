// symmetric matrix check by void function
#include <stdio.h>

void Symmetric(int a[10][10], int r, int c)
{
    int i, j;

    if (r != c)
    {
        printf("The matrix is not symmetric (not square)\n");
    }
    else
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    printf("The matrix is not symmetric\n");
                    return;
                }
            }
        }
        printf("The matrix is symmetric\n");
    }
}

int main()
{
    int r, c, i, j, a[10][10];

    printf("Enter the number of rows and columns of matrix(0-10): ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\n");
    Symmetric(a, r, c);
    return 0;
}