//Find sum and average of 1D array
#include <stdio.h>
int main() 
{
    int arr[10], i, sum = 0;
    float average;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / 10;

    printf("Sum of array elements is: %d\n", sum);
    printf("Average of array elements is: %.2f\n", average);
    return 0;
}