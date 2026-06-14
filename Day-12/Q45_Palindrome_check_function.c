// function to check for palindrome number
#include <stdio.h>

void p(int n) 
{
    int original = n, reversed = 0;
    while (n > 0) 
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a Palindrome\n", original);
    else
        printf("%d is NOT a Palindrome\n", original);
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    p(n);

    return 0;
}