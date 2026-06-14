// function to find factorial
#include <stdio.h>

void factorial(int n)
{
    int i;
    long long f = 1;

    if (n < 0)
    {
        printf("Not defined for negative numbers.\n");
        return;
    }

    for (i = 1; i <= n; i++)
        f *= i;

    printf("Factorial of %d = %lld\n", n, f);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    factorial(n);

    return 0;
}