//FUNTION TYPE-2
#include<stdio.h>
int sum (int m,int n)
{
    return m+n;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int result=sum(a,b);
    printf("sum=%d\n",result);


    return 0;
}
