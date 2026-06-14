//Find largest and smallest element of a 1D array.
#include <stdio.h>
int main() 
{
    int a[10], i, largest, smallest;
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) 
        {scanf("%d", &a[i]);}

    largest = a[0];
    smallest = a[0];

    for (i = 1; i < 10; i++) 
    {
        if (a[i] > largest) 
        {largest = a[i];}

        if (a[i] < smallest) 
        {smallest = a[i];}
    }

    printf("Largest element is: %d\n", largest);
    printf("Smallest element is: %d\n", smallest);
    return 0;
}