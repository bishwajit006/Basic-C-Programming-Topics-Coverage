/*
Array declaration : data type variable [Array size]
                    int marks [3]
Array iniatialization : marks[0]=50
                        marks[1]=30
                        marks[2]=80
*/


#include<stdio.h>
int main()
{

    int marks [5];

    printf("enter students marks :");
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);


    printf("%d\n",marks[0]);
    printf("%d\n",marks[1]);
    printf("%d\n",marks[2]);
    printf("%d\n",marks[3]);
    printf("%d\n",marks[4]);

    return 0;
}

