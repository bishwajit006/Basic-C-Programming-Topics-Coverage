#include<stdio.h>
int main()
{
    char s[500],ch;
    int i=0,capital=0,small=0;
    printf("Enter a string:");
    gets(s);

    while(s[i]!='\0')
    {
        ch=s[i];
        if(ch>=65 && ch<=90)
        capital++;
        else if(ch>=97 && ch<=122)
            small++;

        i++;
    }
    printf("Number of capital letter=%d\n",capital);
    printf("Number of small letter=%d",small);

    return 0;
}
