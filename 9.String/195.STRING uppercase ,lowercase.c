#include<stdio.h>
int main()
{
    char s[50]="Bishwajit Das";

    strupr(s);
    printf("Uppercase=%s\n",s);

    strlwr(s);
    printf("Lowercase=%s",s);
    return 0;
}
