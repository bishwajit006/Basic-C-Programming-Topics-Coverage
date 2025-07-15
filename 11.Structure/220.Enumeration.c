// enum use for multi constant
#include<stdio.h>
enum daysofweek
{
    sun,mon,tue,wed,thu,fri,sat
};
int main()
{
    enum daysofweek day1,day2,day3;
    day1=sun;//0
    day2=wed;//3
    day3=fri;

    int dif =day3-day2;
    printf("day1=%d\n",day1);
    printf("day2=%d\n",day2);
    printf("day3=%d\n",day3);
    printf("Difference=%d",dif);

    return 0;
}
