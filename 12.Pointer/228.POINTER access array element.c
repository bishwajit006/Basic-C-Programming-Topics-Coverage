#include<stdio.h>
int main()
{
    int a[3]={2,5,9},i;
    int *p;
    p=&a[0];
    for(i=0;i<3;i++)
    {
        printf("%d ",*p);
        p++;
    }


return 0;
}

