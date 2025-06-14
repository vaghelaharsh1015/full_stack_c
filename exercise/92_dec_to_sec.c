#include<stdio.h>
int main()
{
    float dec,year,day, hr,min,sec ;
    printf("enter a value of  dec :");
    scanf("%f",& dec);

    year=dec/10;
    day=year/365;
    hr=day/24;
    min=hr/60;
    sec=min/60;


    printf(" sec =%f", sec);
    return 0;
}