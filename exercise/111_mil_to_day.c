#include<stdio.h>
int main()
{
    float  mill,year,day;
    printf("enter a value of mill:");
    scanf("%f", &mill);

    year=mill/1000;
    day=year/365;

    printf("day =%f",day);
    return 0;
}