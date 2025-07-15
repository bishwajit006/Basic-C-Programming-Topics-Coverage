#include<stdio.h>
int square(n)
{
    return n*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("square=%d",square(n));

    return 0;
}
