#include<stdio.h>
int max(int x[]) //return that is why not use void
{
    int i,max;
    max=x[0];
    for(i=0;i<5;i++)
    {
        if(x[i]>max)
         max=x[i];
    }
    return max;

}
int main()
{
    int a[]={10,20,55,35,65};
   int  maxvalue= max(a);
   printf("max=%d",maxvalue);

    return 0;
}
