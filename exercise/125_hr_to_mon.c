#include<stdio.h>
int main()
{
    float hr,day,year,mon ;
    printf("enter a value of hr :");
    scanf("%f",&hr );

    day=hr*24;
    year=day*365;
    mon=year/12;

    printf("mon =%f" ,mon);
    return 0;
}