// Check if a number is an Armstrong number
#include <stdio.h>
int main() 
{
int n, rem, sum = 0, temp, digits = 0;
printf("Enter a number: ");
scanf("%d", &n);

temp = n;
while (temp != 0) 
{
    digits++;
    temp = temp / 10;
}

temp = n;
while (temp != 0) 
{
    rem = temp % 10;
    int power = 1;
    for (int i = 0; i < digits; i++)
        power = power * rem;
    sum = sum + power;
    temp = temp / 10;
}
if (sum == n)
    printf("%d is an Armstrong number\n", n);
else
    printf("%d is NOT an Armstrong number\n", n);

return 0;
}