#include<stdio.h>
int main()
{
    float  hour,day,year,week;
    printf("enter a value of hour:");
    scanf( "%f" ,& hour);

    day=hour/24;
    year=day*365;
    week=year/52;

    printf(" week= %f",week);
    return 0;


}