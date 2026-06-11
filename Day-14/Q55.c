//Second largest element
#include <stdio.h>
int main() 
{
    int n,a[100];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // bubble sort
    for (int i = 0; i < n - 1; i++)
        {for (int j = 0; j < n - i - 1; j++)
            if (a[j] < a[j + 1]) 
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }}

    // Second largest
    for (int i = 1; i < n; i++)
        {if (a[i] != a[0]) 
        {
            printf("Second largest: %d\n", a[i]);
            return 0;
        }}

    printf("No second largest element.\n");
    return 0;
}