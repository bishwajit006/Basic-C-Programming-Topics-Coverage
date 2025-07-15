#include<stdio.h>
void string(char x[])
{
    int i=0;
   while(x[i]!='\0')
   {
       printf("%c",x[i]);
       i++;
   }
}
int main()
{
    char a[]="Bishwajit Das";
    string(a);

    return 0;
}
