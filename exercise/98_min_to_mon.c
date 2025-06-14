#include<stdio.h>
int main()
{
    float  min,hr,day,year,mon;
    printf("enter a value of  min");
    scanf("%f",& min);
     hr=min*60;
     day=hr*24;
     year=day*365;
     mon=year/12;

    printf(" mon=%f", mon);
    return 0;
}