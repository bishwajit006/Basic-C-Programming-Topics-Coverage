//1+2+3+........+n
#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter the last number :");
    scanf("%d",&n);
    printf("1+2+3+.....+%d",n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("=%d",sum);

 return 0;
}
