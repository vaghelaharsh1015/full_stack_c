#include<stdio.h>
int main()
{
    float mon,year, day ;
    printf("enter a value of mon :");
    scanf("%f",& mon );

    year=mon*12;
    day=year/365;

    printf(" day =%f" ,day);
    return 0;
}