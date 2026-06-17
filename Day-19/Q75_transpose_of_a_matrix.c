//transpose of a matrix
#include <stdio.h>
int main()
{
    int m, n, i, j, a[10][10];
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}