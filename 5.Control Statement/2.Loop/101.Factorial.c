// 3 factorial(3!) =1*2*3
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter any positive number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial = %d",fact);

    return 0;
}
