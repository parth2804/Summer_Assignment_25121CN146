// Check if a number is prime or not
#include <stdio.h>
int main() 
{
    int num, i,prime=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 2) 
        { printf("%d is not prime.\n", num);}
    else 
    {
        for (i = 2; i*i<= num; i++) 
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)    {printf("%d is prime.\n", num);}
        else          {printf("%d is not prime.\n", num);}
    }
    return 0;
}