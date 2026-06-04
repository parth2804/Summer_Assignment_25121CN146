// Find Armstrong numbers in a given range
#include <stdio.h>

int main() 
{
int low, high, n, rem, sum, temp, digits, power, i;
printf("Enter range (low high): ");
scanf("%d %d", &low, &high);

printf("Armstrong numbers between %d and %d:\n", low, high);

for (n = low; n <= high; n++) 
{
    // count digits
    digits = 0;
    temp = n;
    while (temp != 0) 
    {
        digits++;
        temp = temp / 10;
    }

    // calculate sum of powers
    sum = 0;
    temp = n;
    while (temp != 0) 
    {
        rem = temp % 10;
        power = 1;
        for (i = 0; i < digits; i++)
            power = power * rem;
        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d\n", n);
}

return 0;
}