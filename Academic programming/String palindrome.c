#include<stdio.h>
int main()
{
    char a[50];
    int i,l,d=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
       if(a[i++]==a[l-i-1])
       {
           d++;
           break;
       }
    }
    if(d>0)
        printf("%s n\n",a);
    else
        printf("%s y",a);
    return 0;
}
