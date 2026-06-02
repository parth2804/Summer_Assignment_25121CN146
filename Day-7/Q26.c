// fibonacci series printing using recursion
#include <stdio.h>
int fib(int n) 
{
    if (n > 1)  
        return fib(n - 1) + fib(n - 2);
    else
        return n;
}

int main() 
{
    int n;
    printf("Enter terms of fibonacci series to be printed: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d term:\n ", n);
    for (int i = 0; i < n; i++)
        printf("%d ", fib(i));
    return 0;
}