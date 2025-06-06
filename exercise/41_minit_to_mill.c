#include<stdio.h>
int main()
{
    float minit,hr,day,year,mill;
    printf("enter avalue of minit:");
    scanf("%f",& minit );

    hr=minit/60;
    day=hr/24;
    year=day/365;
    mill=year/1000;
    
    printf("mill=%f",mill);
    return 0 ;
}