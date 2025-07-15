#include<stdio.h>
int max(int a,int b)//direct definition
{
    if(a>b)
        return a;
    else
        return b;
}
int min(int c,int d)
{
    if(c<d)
        return c;
    else
        return d;
}

int main()
{
    int high,low;
    high=max(5,4);
    low=min(5,4);
    printf("max=%d\n",high);
    printf("min=%d",low);
    return 0;
}
