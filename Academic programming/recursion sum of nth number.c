#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    else
    return n+sum(n-1);
}
int main()
{
   int a,result;
   scanf("%d",&a);
   result=sum(a);
   printf("%d\n",result);

    return 0;
}
