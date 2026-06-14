// Function to find maximum of two numbers

#include <stdio.h>
float max(float a, float b) 
{
    if (a > b) return a;
    else return b;
}

int main() 
{
    float n1, n2;
    printf("Enter first number : ");
    scanf("%f", &n1);
    printf("Enter second number: ");
    scanf("%f", &n2);
    printf("Maximum of %f and %f = %f\n", n1, n2, max(n1, n2));
    return 0;
}