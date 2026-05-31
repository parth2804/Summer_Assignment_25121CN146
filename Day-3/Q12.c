// Calculate LCM of two numbers
#include <stdio.h>
int main() 
{
    int a, b, temp, x, y, gcd, lcm;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    x = a;
    y = b;
    // GCD 
    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    // LCM 
    if (x == 0 || y == 0)
        lcm = 0;
    else
        lcm = (x * y) / gcd;
    printf("LCM is: %d\n", lcm);
    return 0;
}