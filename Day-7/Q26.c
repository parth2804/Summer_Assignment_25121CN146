// fibonacci series printing using recursion
#include <stdio.h>
int fibonacci(int n) 
{
    if (n > 1)  
        return fibonacci(n - 1) + fibonacci(n - 2);
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
        printf("%d ", fibonacci(i));
    return 0;
}