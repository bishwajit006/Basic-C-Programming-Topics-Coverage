#include<stdio.h>
int main()
{
    int marks [5];
    int i;
    printf("enter students marks :");
    for(i=0;i<=4;i++) // loop for decrease work
    {
       scanf("%d",&marks[i]);
    }

    for(i=0;i<=4;i++)
    {
        printf("%d\n",marks[i]);
    }

    return 0;
}
