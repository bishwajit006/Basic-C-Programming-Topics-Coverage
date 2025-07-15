//typedef can change datatype
#include<stdio.h>
int main()
{
    typedef char base; // base be datatype of char
    base ch; //base mean char datatype
    ch='B';
    printf("ch=%c\n",ch);

    base ch1;
    ch1='D';
    printf("ch1=%c",ch1);



    return 0;
}
