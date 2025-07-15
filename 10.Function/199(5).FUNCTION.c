#include<stdio.h>
int sum (int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul (int a,int b)
{
    return a*b;
}
int div (int a,int b)
{
    return a/b;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    printf("sum=%d\n",sum(a,b));
    printf("sub=%d\n",sub(a,b));
    printf("Multiplication=%d\n",mul(a,b));
    printf("Division=%d\n",div(a,b));

    return 0;
}
