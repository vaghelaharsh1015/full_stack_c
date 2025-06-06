#include<stdio.h>
int main()
{
    float min, hr,day,year,week;
    printf("entr a value of min :");
    scanf( "%f",&  min);

    hr=min/60;
    day=hr/24;
    year=day/365;
    week=year/52;

     printf("week =%f", week );
     return 0 ;
}