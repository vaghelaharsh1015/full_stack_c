#include<stdio.h>
int main()
{
    float year,day;
    printf("enter a  value of year :");
    scanf("%f" ,& year);

    day= year/365 ;

    printf(" day = %f",day);
    return 0;
}