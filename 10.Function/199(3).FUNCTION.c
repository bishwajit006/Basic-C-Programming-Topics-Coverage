//use same varible in function
#include<stdio.h>
int sum (int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("sum=%d\n",sum(a,b));

    return 0;
}
