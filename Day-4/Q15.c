// Check if a number is an Armstrong number
#include <stdio.h>
int main() 
{
    int num, temp, digits = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (temp = num; temp != 0; temp /= 10) 
    {
        digits++;
    }
    for (temp = num; temp != 0; temp /= 10) 
    {
        int rem = temp % 10, p = 1;
        for (int i = 0; i < digits; i++) 
        {
            p *= rem;
        }
        result += p;
    }

    if (result == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}