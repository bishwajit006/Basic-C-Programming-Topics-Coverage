//1-2+3-4+5-6+...........+-n
#include<stdio.h>
int main()
{
    int i,n,sum=0,even=0,odd=0;
    printf("Enter any positive number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;
    }
    printf("Result= %d",odd-even);


    return 0;
}
