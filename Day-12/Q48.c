// function to check for perfect number
#include <stdio.h>

void p(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("%d is a Perfect number\n", n);
    else
        printf("%d is NOT a Perfect number\n", n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    p(num);
    return 0;
}