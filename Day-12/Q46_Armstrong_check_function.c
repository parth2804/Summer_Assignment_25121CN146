// function to check for Armstrong number
#include <stdio.h>
void Arm(int n) 
{
    int rem, sum = 0, temp = n, digits = 0;

    while (temp != 0) 
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) 
    {
        rem = temp % 10;
        int power = 1;
        int i = 0;
        while (i < digits) 
        {
            power *= rem;
            i++;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Arm(num);
    return 0;
}