#include<stdio.h>
int main()
{
    float week,year,dec ;
    printf("enter a value of week :");
    scanf("%f",&  week);

    year=week*52;
    dec=year*10;

    printf(" dec=%f" ,dec);
    return 0;
}