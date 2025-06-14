#include<stdio.h>
int main()
{
    float  mon,year,day,hr,min;
    printf("enter a value of  mon:");
    scanf("%f",& mon);

    year=mon/12;
    day=year/365;
    hr=day/24;
    min=hr/60;

    printf("min =%f" , min);
    return 0;
}