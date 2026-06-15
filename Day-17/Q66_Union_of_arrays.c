//union of arrays
#include <stdio.h>
int main() 
{
    int n1, n2, a[100], b[100], r[200], i, j, k = 0, found;

    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Copy first array to result
    for (i = 0; i < n1; i++) r[k++] = a[i];

    // Add unique elements from second array
    for (i = 0; i < n2; i++) 
    {
        found = 0;
        for (j = 0; j < n1; j++) 
        {
            if (b[i] == a[j]) 
            {
                found = 1;
                break;
            }
        }
        if (!found) r[k++] = b[i]; //found==0
    }
    printf("\nUnion of arrays: ");
    for (i = 0; i < k; i++) printf("%d ", r[i]);
    printf("\n");
    return 0;
}