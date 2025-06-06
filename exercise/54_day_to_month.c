#include<stdio.h>
int main()
{
    float day,year,mon;
    printf("entr a value of day :");
    scanf( "%f" ,& day );

    year=day/365;
    mon=year/12;

     printf("mon=%f", mon);
     return 0 ;
}