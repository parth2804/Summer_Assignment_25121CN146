//Remove duplicates from array
#include <stdio.h>
int main()
{
    int a[100], n, i, j, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {scanf("%d", &a[i]);}

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                {a[k] = a[k + 1];}
                n--; // reduce size of array
                j--; // check the new element at position j
            }
        }
    }

    printf("The array after removing duplicates is:\n");
    for (i = 0; i < n; i++)
    {printf("%d\n", a[i]);}
    return 0;
}