#include<stdio.h>
int main()
{
    char s[]="Bishwajit Das";
    int i=0,length=0;
    while(s[i]!=0)
    {
        i++;
        length++;
    }
    printf("LENGTH=%d",length);

    return 0;
}
