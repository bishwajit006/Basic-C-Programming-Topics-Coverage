
//1 x 2 x 3 x.....x n
#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter any positive number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
        if(i==1)
            printf("\n1 x ");
        else if(i==n)
            printf("%d",i);
        else
            printf("%d x ",i);
    }
    printf(" = %d\n",sum);


    return 0;
}
