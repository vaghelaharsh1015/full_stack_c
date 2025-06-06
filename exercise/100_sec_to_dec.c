#include<stdio.h>
int main()
{
    float  sec ,min,hr,day,year,dec;
    printf("enter a value of  sec");
    scanf("%f",& sec);

    min=sec/60;
    hr=min*60;
    day=hr*24;
    year=day*365;
    dec=year*100;

    printf(" dec =%f", dec);
    return 0;
}