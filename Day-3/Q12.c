// Calculate LCM of two numbers
#include <stdio.h>
int main() 
{
    int a, b, i, gcd = 1, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) 
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    lcm = (a * b) / gcd;

    printf("LCM = %d", lcm);
    return 0;
}