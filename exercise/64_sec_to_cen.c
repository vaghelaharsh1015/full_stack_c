#include<stdio.h>
int main()
{
    float sec,min,hr,day,year,cen;
    printf("entr a value of  sec :");
    scanf( "%f",& sec);

    min=sec*60;
    hr=min*60;
    day=hr/24;
    year=day/365;
    cen=year/100;

     printf("cen  =%f" ,cen );
     return 0 ;
}