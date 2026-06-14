//Find pair with given sum
#include <stdio.h>
int main()
{
    int a[100], n, i, j, sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {scanf("%d", &a[i]);}

    printf("Enter the sum to find pairs: ");
    scanf("%d", &sum);

    printf("The pairs with sum %d are:\n", sum);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {printf("%d + %d = %d\n", a[i], a[j], sum);}
        }
    }
    return 0;
}