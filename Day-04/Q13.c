//Write a program to print fibonacci series
#include <stdio.h>
int main() 
{
    int n, count = 1,a = 0, b = 1, sum;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    while (count <= n) 
    {
        printf("%d\n", a);
        sum = a + b;
        a = b;
        b = sum;
        count++;
    }
    return 0;
}