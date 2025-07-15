#include<stdio.h>
int  fact(int x)
{
    if(x==0)return 0;
    else if(x==1) return 1;
    else
     return   fact(x-1)+fact(x-2);

}
int main()
{
    int n,i;
    scanf("%d",&n);
    fact(n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fact(i));
    }


    return 0;
}
