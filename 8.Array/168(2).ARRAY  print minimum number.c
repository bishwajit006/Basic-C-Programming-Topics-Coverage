//write a programme that can take some numbers and display minimum
#include<stdio.h>
int main()
{
    int num[100],n,i,max;
    printf("How many numbers :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

     max=num[0];

    for(i=1;i<n;i++)
    {
        if(max>num[i]) // if num[i] big then print num[i]
            max=num[i];
    }
    printf("minimum = %d",max);

    return 0;
}
