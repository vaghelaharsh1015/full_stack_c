#include<stdio.h>
int main()
{
    float  hr,day,year;
    printf("enter a value of hr :");
    scanf("%f", &hr );

    day=hr/24;
    year=day/365;

    printf("year =%f",year);
    return 0;
}