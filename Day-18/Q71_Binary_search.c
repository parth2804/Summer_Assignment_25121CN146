//binary search
#include <stdio.h>
int main() 
{
    int n, i, beg, end, mid, key, a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in ascending order: ");
    for (i = 0; i < n; i++) 
    {scanf("%d", &a[i]);}
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    beg = 0;
    end = n - 1;
    while (beg <= end) 
    {
        mid = (beg + end) / 2;
        if (a[mid] == key) 
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (a[mid] < key) beg = mid + 1;
        else end = mid - 1;
    }
    printf("Element not found\n");
    return 0;
}