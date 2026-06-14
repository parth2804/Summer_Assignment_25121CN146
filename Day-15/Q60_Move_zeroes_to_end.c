// move zeros to end in an 1d array
#include <stdio.h>
int main()
{
    int a[10], n, i, j = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {scanf("%d", &a[i]);}

    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j++] = a[i];
        }
    }

    while (j < n)
    {
        a[j++] = 0;
    }

    printf("The array after moving zeros to end is:\n ");
    for (i = 0; i < n; i++)
    {printf("%d\n", a[i]);}
    
    return 0;
}
