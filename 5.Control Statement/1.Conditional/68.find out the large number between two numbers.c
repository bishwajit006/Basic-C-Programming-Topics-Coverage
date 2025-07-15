#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("large %d\n",a);
    else if(a<b)
        printf("large %d\n",b);
    else
        printf("equal");
return 0;


}
