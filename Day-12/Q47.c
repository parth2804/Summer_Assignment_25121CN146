// function to print Fibonacci series up to n terms
#include <stdio.h>

void fibonacci(int n)
{
    int count = 1, a = 0, b = 1, sum;

    printf("Fibonacci Series:\n");
    while (count <= n)
    {
        printf("%d\n", a);
        sum = a + b;
        a = b;
        b = sum;
        count++;
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}