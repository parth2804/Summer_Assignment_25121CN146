//Frequency of an element
#include <stdio.h>
int main() 
{
    int arr[10], i, num, count = 0;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) 
    {scanf("%d", &arr[i]);}
    

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++) 
    {
        if (arr[i] == num) 
        {count++;}
    }

    printf("Frequency of %d is %d\n", num, count);
    return 0;
}