/*printf another way
print in function*/
#include<stdio.h>
int sum (int a,int b)
{
  printf("sum=%d",a+b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
   sum(a,b);

    return 0;
}
