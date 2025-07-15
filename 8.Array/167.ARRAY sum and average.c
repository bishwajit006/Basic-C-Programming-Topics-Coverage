#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n,avg;
    printf("How many numbers :");
    scanf("%d",&n); //taking number of variable
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); // taking value of variable
                           // must use index : []
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=sum/n;
    }
    printf("sum = %d\n",sum);
    printf("avg = %d",avg);

    return 0;
}
