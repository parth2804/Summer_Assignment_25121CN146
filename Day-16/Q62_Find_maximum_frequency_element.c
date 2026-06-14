//Find maximum frequency element
#include <stdio.h>
int main()
{
    int a[100], n, i, j, max = 0, freq;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {scanf("%d", &a[i]);}

    for (i = 0; i < n; i++)
    {
        freq = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j]) {freq++;}
        }
        if (freq > max) {max = freq;}
    }

    printf("The maximum frequency element is/are: ");
    for (i = 0; i < n; i++)
    {
        freq = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j]) {freq++;}
        }
        if (freq == max) 
        {printf("%d ", a[i]);
            break;
        }
    }
    printf("\n");
    return 0;
}