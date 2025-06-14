#include<stdio.h>
int main()
{
    float  week,year,day,hr,min,sec;
    printf("entr a value of week:");
    scanf( "%f",&  week );

    year=week/52;
    day=year/365;
    hr=day/24;
    min=hr/60;
    hr=min/60;
     printf("hr  =%f" , hr);
     return 0 ;
}