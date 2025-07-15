/* pointer use for minimize memory.
&a mean address of a. Pointer work in for a adress of variable.
For pointer use *a;
*/

#include<stdio.h>
int main()
{
    int a=5;
    int *ptr; //*ptr mean pointer variable
    ptr=&a; // &a mean store value of a in ptr

    printf("value of a=%d\n",a); // only value of a. a=5
    printf("Adress of a=%d\n",&a); // if you want to see address of any variable use '&'
    printf("value of ptr=%d\n",ptr); // ptr=address of a;
    printf("ptr=%d\n",*ptr); // *p mean only value so ,=2


return 0;
}
