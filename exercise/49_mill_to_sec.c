#include<stdio.h>
int main()
{
    float mill,yaer,day,hr,minit,sec;
    printf("enter a value of  mill:");
    scanf ("%f",& mill);
 
    yaer =mill/1000;
    day=yaer/365;
    hr=day/24;
    minit=hr/60;
    sec=minit/60;


    printf(" sec=%f", sec );
    return  0;
}