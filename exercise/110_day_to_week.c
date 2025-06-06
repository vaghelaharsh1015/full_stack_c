#include<stdio.h>
int main()
{
    float  day,year,week;
    printf("enter a value of day");
    scanf("%f",& day);

    year=day*365;
    week=year/52;

    printf("week =%f", week);
    return 0;
}