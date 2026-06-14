// Function to find the sum of two numbers

#include <stdio.h>
float sum(float a, float b) 
{return a + b;}

int main() 
{
float num1, num2, result;

printf("Enter first number: ");
scanf("%f", &num1);
printf("Enter second number: ");
scanf("%f", &num2);

result = sum(num1, num2);

printf("Sum of %f and %f = %f\n", num1, num2, result);
return 0;
}