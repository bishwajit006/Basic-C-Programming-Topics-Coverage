#include<stdio.h>
int main()
{
    int a=5,b=10,temp;
    int *p1,*p2;

    p1=&a;
    p2=&b;

   temp=*p1;
   *p1=*p2;
   *p2=temp;

   printf("A=%d\n",a);
   printf("B=%d\n",b);


return 0;
}
