#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int a,result;
    scanf("%d",&a);
    result=fact(a);
    printf("%d\n",result);

    return 0;
}
