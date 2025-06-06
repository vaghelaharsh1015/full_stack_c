#include<stdio.h>
int main()
{
    int cen,year,day,hr,minit,seco;
    printf("enter a value of cen :");
    scanf ("%d", & cen);

    year= cen/100;
    day=year/365;
    hr=day/24;
    minit=seco/60;

    printf("seco=%d",seco);
    return 0;
    
}