#include<stdio.h>
int main()
{
    float  mon,year,dec;
    printf("enter a value of mon: ");
    scanf("%f",& mon);

    year=mon/12;
    dec=year*10;

    printf(" dec =%f", dec);
    return 0;
}