//0 1 1 2 3
//fibonacci mean: first number +second number
//fibonacci number = 0+1=1, 1+1=2, 1+2=3
#include<stdio.h>
int main()
{
    int first=0,second=1,i,fibo,n;
    printf("Enter any Positive number :");
    scanf("%d",&n);
     for(i=0;i<n;i++) //fibonacci start from '0'
                    // i<n Beacuse start with '0' ,if n=5 then output : 0 1 1 2 3
    {
        if(i<=1)
        {
            fibo=i;
        }
        else
            {
             fibo=first+second;
             first=second;
             second=fibo;
             }
        printf(" %d",fibo);
    }

    return 0;
}
