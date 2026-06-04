//To find the factorial of a given number
#include<stdio.h>
int main(){
int n,i=1,fact=1;
printf("Enter a natural number : ");
scanf("%d",&n);
while (i<=n)
{fact=fact*i;
i++;}
printf("The factorial of %d is %d",n,fact);
return 0;
}