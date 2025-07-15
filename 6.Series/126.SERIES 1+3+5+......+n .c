//1+3+5+......+n
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any number :");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf(" %d",i);
        sum=sum+i;
    }
    printf("\nsum=%d",sum);

    return 0;
}
