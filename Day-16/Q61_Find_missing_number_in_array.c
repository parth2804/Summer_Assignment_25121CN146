//Find missing number in array
#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0, total_sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array (from 1 to %d): ", n);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total_sum = n * (n + 1) / 2;
    printf("The missing number is: %d\n", total_sum - sum);
    return 0;
}