//Rotate array left
#include <stdio.h>
int main()
{
    int a[10], n, i, d;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {scanf("%d", &a[i]);}

    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);

    d = d % n; // if d > n

    printf("The rotated array is: \n");
    for (i = d; i < n; i++)
    {printf("%d\n", a[i]);}

    for (i = 0; i < d; i++)
    {printf("%d\n", a[i]);}
    return 0;
}