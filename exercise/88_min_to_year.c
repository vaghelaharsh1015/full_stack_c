#include<stdio.h>
int main()
{
    float min,hr,day,year;
    printf("enter a value of min :");
    scanf("%f",& min) ;

    hr=min/60;
    day=hr/24;
    year=day/365;


    printf(" year =%f" ,year);
    return 0;
}