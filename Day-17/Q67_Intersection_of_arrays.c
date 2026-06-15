//Intersection of two arrays
#include <stdio.h>
int main() 
{
    int n1, n2, a[100], b[100], r[100], i, j, k = 0;

    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    //intersection
    for (i = 0; i < n1; i++)
    {    
        for (j = 0; j < n2; j++) 
        {
            if (a[i] == b[j]) 
            {
                r[k++] = a[i];
                break;
            }
        }
    }
    printf("\nIntersection of arrays: ");
    for (i = 0; i < k; i++) printf("%d ", r[i]);
    printf("\n");
    return 0;
}