// Check if a number is an Armstrong number
#include <stdio.h>
int main()
{
    int num, original, temp, remainder, n = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    if (num == 0)
    {
        n = 1;
    }
    else
    {
        temp = num;

        while (temp != 0)
        {
            n++;
            temp /= 10;
        }
    }

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;

        int power = 1;
        int i = 1;

        while (i <= n)
        {
            power *= remainder;
            i++;
        }

        result += power;
        temp /= 10;
    }

    if (num == 0)
    {
        printf("0^1 = 0\n");
        result = 0;
    }
    else
    {
        temp = num;

        while (temp != 0)
        {
            remainder = temp % 10;
            printf("%d^%d", remainder, n);
            temp /= 10;
            if (temp != 0)
                {printf(" + ");}
        }
        printf(" = %d\n", result);
    }
    if (result == original)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);
    return 0;
}