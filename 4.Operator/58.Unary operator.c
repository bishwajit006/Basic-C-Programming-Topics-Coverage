/* plus unary =(+x) make positive number,
   minus unary =(-) make negative number,

   pre increment unary = (++x) immidiately increse 1,
   post increment unary = (x++) after getting x or use x++ then increase 1,

   pre discrement unary = (--x) immidiatelu decrease 1,
   post discrement unary = (x--) after getting x or use x-- then decrease 1,
   */

   #include<stdio.h>
   int main()
   {
       int x=10;

       int  y = +x;//x=10
       printf(" plus unary :%d\n",y);

       y = -x;//x= -10
       printf(" minus unary :%d\n\n",y);


       y = ++x;//y=11
       printf("preincrement unary :%d\n",x);// x=11
       printf("postincrement unary :%d\n\n",y);


       int x2=10;// taking extra variable because last x=11
       y= x2++; //y=10
       printf("postincrement unary : %d\n",x2);//x=11
       printf("postincrement uanry : %d\n\n",y);


       int x3=10;
       y= --x3;//y= 9
       printf("predecrement unary : %d\n",x3);//x=9
       printf("predecrement unary : %d\n\n",y);


       int x4=10;
       y=x4--; //x=10
       printf("postdecrement unary : %d\n",x4); //9
       printf("postdecrement unary : %d\n",y);

       return 0;


   }
