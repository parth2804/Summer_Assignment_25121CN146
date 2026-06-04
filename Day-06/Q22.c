// binary to decimal conversion
#include <stdio.h>
int main() 
{
    int binary, decimal = 0, base = 1, digit;
    printf("Enter binary: ");
    scanf("%d", &binary);
    while (binary > 0) 
    {
        digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}