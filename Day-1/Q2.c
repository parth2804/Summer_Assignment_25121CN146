//Multiplication Table of a given number
#include <stdio.h>
int main() 
{
int i,a,b;
printf("Please Enter the number: ");
scanf("%d", &a); 
printf("Mu2ltiplacation Table of %d :\n", a);
for (i = 1; i <= 10; i++) 
{
b=a*i ;
printf("%d*%d=%d\n",a,i,b);
}
 return 0;
}