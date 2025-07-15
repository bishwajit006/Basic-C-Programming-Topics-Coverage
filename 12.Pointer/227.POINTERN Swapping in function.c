#include<stdio.h>
void swap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
     printf("After swapping A=%d, B=%d\n",*p1,*p2); // Here can print but declared value(pointer value)

}
int main()
{
    int a=5,b=10;
    printf("Before swapping A=%d, B=%d\n",a,b);
    swap(&a,&b);

     printf("After swapping A=%d, B=%d\n",a,b);// Here can print original value



return 0;
}
