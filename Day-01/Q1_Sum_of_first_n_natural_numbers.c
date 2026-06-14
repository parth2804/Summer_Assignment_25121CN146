//Sum of first n natural numbers
#include <stdio.h>
int main()
{
int n,sum=0;
printf("Enter the any natural number : ");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{sum=sum+i;}
printf("The sum of first %d natural numbers is %d",n,sum);
return 0;
}