// to reverse an array
#include <stdio.h>
int main()
{
    int a[10], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {scanf("%d", &a[i]);}
    
    printf("The reversed array is: \n");
    for (i = n - 1; i >= 0; i--)
    {printf("%d\n", a[i]);}
    return 0;
}