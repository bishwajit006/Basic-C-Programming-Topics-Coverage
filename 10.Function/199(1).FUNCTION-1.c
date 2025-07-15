// function use for smartness and short code
//at first start compile at main funtion then other function
/* {
     return function
   }
*/

//function type-1
#include<stdio.h>
int sum (int m,int n)// value store in m,n
{
    return m+n; //now,operation
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",sum(a,b));

    return 0;
}

