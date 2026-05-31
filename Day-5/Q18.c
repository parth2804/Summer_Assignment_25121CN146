// Check for Strong Number
#include <stdio.h>
int fact(int n) 
{
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() 
{
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (temp = n; temp > 0; temp /= 10)
        {sum += fact(temp % 10);}

    if (sum == n)   printf("Strong Number");
    else    printf("Not a Strong Number");
    return 0;
}