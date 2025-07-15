#include<stdio.h>
int max(int a,int b);//declaration so use semicolon ;
int min(int c,int d);
int main()
{
    int high,low;
    high=max(5,4);
    low=min(5,4);
    printf("max=%d\n",high);
    printf("min=%d",low);
    return 0;
}
int max(int a,int b)// definition(function is here) so not use seimicolon ;
{
    if(a>b)
        return a;
    else
        return b;
}
int min(int c, int d)
{
    if(c<d)
        return c;
    else
        return d;
}
