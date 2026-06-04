//Check for palindrome
#include <stdio.h>
int main() 
{
int n,r,m=0,Temp;
printf("Enter the number : ");
scanf("%d", &n); 
Temp=n;

while (n != 0) 
{
r=n%10;
m=m*10+r;
n=n/10;
}

if (m==Temp){printf("The number is a palindrome");}
else printf("The number is not a palindrome");

return 0;
}