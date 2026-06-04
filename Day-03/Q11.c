// Calculate GCD of two numbers
#include <stdio.h>
int main() 
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD is: %d\n", a);
    return 0;
}