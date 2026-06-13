//Rotate array right
#include <stdio.h>
int main()
{
    int a[10], n, i, d;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {scanf("%d", &a[i]);}

    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &d);

    d = d % n; // if d > n
    
    printf("The rotated array is: \n");

    for (i = n - d; i < n; i++)
    {printf("%d\n", a[i]);}

    for (i = 0; i < n - d; i++)
    {printf("%d\n", a[i]);}
    return 0;
}
