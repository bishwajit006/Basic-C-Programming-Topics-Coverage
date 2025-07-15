#include<stdio.h>
int main()
{
    int a=5,b=5,sum;
    int *p1,*p2;

    p1=&a; // store address of a in p1
    p2=&b;
    sum=*p1+*p2; // summation of value because using '*'
    printf("sum=%d\n",sum);


return 0;
}
