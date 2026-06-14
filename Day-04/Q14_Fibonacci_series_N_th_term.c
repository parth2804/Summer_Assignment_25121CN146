// Find the nth term of the Fibonacci series
#include <stdio.h>
int main() 
{
    int n, count = 1, a = 0, b = 1, sum;
    printf("Enter the term of fibonacci series: ");
    scanf("%d", &n);

    while (count < n) 
    {
        sum = a + b;
        a = b;
        b = sum;
        count++;
    }
    printf("The %dth Fibonacci term is %d", n, a);
    return 0;
}