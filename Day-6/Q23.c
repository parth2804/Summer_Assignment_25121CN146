// count set bits(number of 1s in binary representation)
#include <stdio.h>
int main() 
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) 
    {
        count += n & 1;  //bitwise &
        n >>= 1;         
        }
    printf("Set bits: %d\n", count);
    return 0;
}