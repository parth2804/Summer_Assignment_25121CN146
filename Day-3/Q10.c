// Print prime numbers in a given range
#include <stdio.h>
int main() 
{
    int a, b, i, j, isPrime;
    printf("Enter start and end of range: ");
    scanf("%d %d", &a, &b);

    if (b < 2) 
    {
        printf("Wrong Range");
        return 0;
    }
    
    for (i = a; i <= b; i++) 
    {
        if (i <= 1)
            continue;

    isPrime = 1;

        for (j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime==1)    printf("%d ", i);
    }
    return 0;
}