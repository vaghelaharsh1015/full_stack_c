#include<stdio.h>
int main()
{
    float min,hr,day,year,dec;
    printf("entr a value of min:");
    scanf( "%f" ,& min);

    hr=min/60;
    day=hr/24;
    year=day/365;
    dec=year/10;

     printf("dec  =%f" , dec);
     return 0 ;
}