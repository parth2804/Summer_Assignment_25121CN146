// Check for Armstrong numbers in a given range
#include <stdio.h>
int main()
{
    int start, end, num;
    printf("Enter start and end of range: ");
    scanf("%d%d", &start, &end);
    
    if (start > end)
    {
        printf("Invalid range!");
        return 0;
    }
    
    printf("Armstrong numbers are:\n");
    for (num = start; num <= end; num++)
    {
        int original = num, temp, remainder, n = 0, result = 0;

        if (num == 0)
        {
            n = 1;
            result = 0;
        }
        else
        {
            temp = num;

            while (temp != 0)
            {
                n++;
                temp /= 10;
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
        }
        if (result == original)
            {printf("%d ", num);}
    }
    return 0;
}