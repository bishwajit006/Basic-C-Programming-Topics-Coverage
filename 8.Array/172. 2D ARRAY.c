/*2D array
declaration : data_type array_name[row_size][col_size]
int a[3][4]
number of elements = row * col
                   =3*4
                   =12
initialization :int a[3][4]={
                             {5,6,8,7}
                             {6,5,9,8}
                             {65,85,45,25}
                            }
*/
#include<stdio.h>
int main()
{
    int row,col;
    int a[3][4]={ {2,5,6,8}, {25,65,85,45}, {66,55,22,33} };
    for(row=0;row<3;row++) // always first loop for row
    {
        for(col=0;col<4;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }

    return 0;
}

