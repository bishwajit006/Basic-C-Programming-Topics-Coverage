#include<stdio.h>
void display(int x[]) /* if you don't return, means if you don't print in main function
                         then use 'void' not use data type*/
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int a[]={10,20,30,55,35};
    display(a);

    return 0;
}
