//linear search
#include<stdio.h>
int main()
{
    int a[]={20,32,65,45,25,23,32,22},i,value,pos=-1;
    printf("what number :");
    scanf("%d",&value);

    for(i=0;i<8;i++)
    {
      if(value==a[i])
      {
          pos=i+1; // +1,because array start from '0'
          break;
      }
    }
    if(pos==-1)
    {
        printf("Item is not found");
    }
    else
    {
        printf("Item is found at position-%d",pos);
    }

    return 0;
}
