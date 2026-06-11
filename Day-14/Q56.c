//Find duplicates in array
#include <stdio.h>
int main() 
{
    int n,a[100];

printf("Enter size of array: ");
    scanf("%d", &n);

printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
    {scanf("%d", &a[i]);}

printf("Duplicate elements: ");
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (a[i] == a[j]) 
            {
                printf("%d ", a[i]);
                break;
            }}}
    return 0;
}