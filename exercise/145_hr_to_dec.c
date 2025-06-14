
#include<stdio.h>
int main()
{
    float  hr,day,year,dec;
    printf("enter a value of hr :");
    scanf("%f",& hr );

    day=hr*24;
    year=day*365;
    dec=year*10;

    printf(" dec=%f",dec);
    return 0;
}