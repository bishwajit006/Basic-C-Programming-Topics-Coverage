//2^3=2*2*2=8
#include<stdio.h>
int power (int a,int n)
{
    int i,result=1;
    for(i=1;i<=n;i++)
    {
        result=result*a;
    }
    return result;
}
int main()
{
  int  a,n;
   printf("Enter the Base:");
   scanf("%d",&a);
   printf("Enter the exponent:");
   scanf("%d",&n);

 int  result=power(a,n);
   printf("%d^%d=%d",a,n,result);

    return 0;
}
