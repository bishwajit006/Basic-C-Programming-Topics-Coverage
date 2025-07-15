#include<stdio.h>
int fact (int m)
{
    if(m==1)
        return 1;
    else
        return m*fact(m-1);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int result=fact(n);
    printf("factorial =%d",result);
    return 0;
}
