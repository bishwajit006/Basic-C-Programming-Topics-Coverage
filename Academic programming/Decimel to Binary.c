#include<stdio.h>
int main()
{

    int n,i,r=0,k;
    int a[30];
    scanf("%d",&n);
   while(n>0)
   {
         a[i]=n%2;

       n=n/2;
        r++;
        i++;// not necessary
   }
   for(i=r-1;i>=0;i--)
   {
       printf("%d",a[i]);
   }





    return 0;
}
