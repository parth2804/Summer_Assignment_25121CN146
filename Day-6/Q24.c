//calculate power(x^y) without using pow() function.
#include <stdio.h>
int main() 
{     
    int n,i,p;
    long long result=1;
    printf("Enter a number :");
    scanf("%d", &n); 
    printf("enter power :");
    scanf("%d", &p); 

    if (p < 0) 
    {
        printf("Negative exponent not supported for integers.\n");
        return 1;
    }

    for (i=1;i<=p;i++) 
    {result*=n;}
    
    printf("result=%lld",result);
    return 0;
}