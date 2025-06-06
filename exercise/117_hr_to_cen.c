#include<stdio.h>
int main()
{
    float hr,day,year,cen;
    printf("enter a value of hr :");
    scanf("%f",&  hr);

    day=hr*24;
    year=day*365;
    cen=year*100;

    printf(" cen=%f" ,cen);
    return 0;
}