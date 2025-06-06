#include<stdio.h>
int main()
{
    float  year,day,hr,min,sec;
    printf("enter a value of year:");
    scanf("%f",& year);

    day=year/365;
    hr=day/24;
    min=hr/60;
    sec=min/60;

    printf("  sec=%f", sec );
    return 0;
}