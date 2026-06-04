//Product of digits of a integer
#include <stdio.h>
int main() 
{
int num, product = 1, digit;
printf("Enter a integer: ");
scanf("%d", &num);

while (num != 0) 
{
digit = num % 10;
product = product * digit;
num = num / 10;
}
printf("Product of digits = %d", product);
return 0;
}