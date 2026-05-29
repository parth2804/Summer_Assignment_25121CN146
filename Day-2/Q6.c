//Reverse the digits of an integer
#include <stdio.h>
int main() 
{
int n,r,m=0;
printf("Enter the integer : ");
scanf("%d", &n); 
while (n != 0) 
{
r=n%10;
m=m*10+r;
n=n/10;
}
printf("reversed integer is %d \t",m);
 return 0;
}