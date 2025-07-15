//   '\0' it is null character , it use for end of string
#include<stdio.h>
int main()
{
    char s[]="Bishwajit";
    int i=0;
   while(s[i]!='\0')
    {
        printf("%c\n",s[i]);
        i++;
    }

    return 0;
}
