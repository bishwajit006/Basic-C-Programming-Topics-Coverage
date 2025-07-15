// goto statement: where say go and it go there and work
#include<stdio.h>
int main ()
{
    int i=1;
    cool:
        printf("very much hot\n");
        i++;

        if(i<=10)
            goto cool; // say go cool,so go cool and work it
    return 0;
}
