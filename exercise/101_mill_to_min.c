#include<stdio.h>
int main()
{
    float mill,year,day,hr,min ;
    printf("enter a value of mill");
    scanf("%f",& mill);

    year=mill/1000;
    day=year/365;
    hr=day/24;
    min=hr/60;

    printf(" min=%f", min);
    return 0;
}