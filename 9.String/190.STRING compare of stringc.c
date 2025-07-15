//strcmp library for compare of string
#include<stdio.h>
int main()
{
    char s1[]="Bishwajit";
    char s2[]="Tonmoy";

    int d = strcmp(s1,s2);// if strings be equal value of d become 0, 'd=0'

    if(d==0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }

    return 0;
}
