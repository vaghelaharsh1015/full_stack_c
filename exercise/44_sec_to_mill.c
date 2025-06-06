#include<stdio.h>
int main()
{ 
    float sec,minit,hr,day,year,mill;

    printf("enter a value of sec :");
    scanf ("%f",& sec);

    minit=sec/60;
    hr=minit/60;
    day=hr/24;
    year=day/365;
    mill=year/1000;
 
    printf(" mill=%f", mill );
    return 0;
}