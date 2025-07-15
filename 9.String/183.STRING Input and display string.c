#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter your full name:\n");

    gets(a);//gets work like scanf, using for string

    printf("full name:%s",a);

    return 0;
}
