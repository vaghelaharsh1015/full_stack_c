#include<stdio.h>
int main ()
{
    float cen,year,day;
    printf("enter a value of cen :");
    scanf("%f", & cen);

    year=cen/100;
    day=year/365;

    printf("day =%f",day);
    return 0;

}