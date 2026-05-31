// Find Armstrong numbers in a given range
#include <stdio.h>
int main() 
{
    int beg, end;
    printf("Enter range (beg end): ");
    scanf("%d %d", &beg, &end);

    printf("Armstrong numbers between %d and %d:\n", beg, end);

    for (int i = beg; i <= end; i++) 
    {
        int temp, digits = 0, result = 0;
        for (temp = i; temp != 0; temp /= 10) 
        {
            digits++;
        }
        for (temp = i; temp != 0; temp /= 10) 
        {
            int rem = temp % 10, p = 1;
            for (int j = 0; j < digits; j++) 
            {
                p *= rem;
            }
            result += p;
        }
        if (result == i) printf("%d\n", i);
    }
    return 0;
}