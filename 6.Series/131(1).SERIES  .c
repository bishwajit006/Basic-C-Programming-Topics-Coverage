//1+1/2+1/3.....+1/n
#include<stdio.h>
int main()
{
    double i,n,sum=0;
    printf("Enter any positive number :");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("sum = %lf\n",sum);


    return 0;
}
