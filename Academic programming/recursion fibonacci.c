#include<stdio.h>
int fibo(int a)
{
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else
    {
      return  (fibo(a-1)+fibo(a-2));

    }
}
int main()
{
   int n,result,i;
   scanf("%d",&n);
   //result=fibo(n);
   for(i=0;i<n;i++)
   printf("%d ",fibo(i));
    return 0;
}
