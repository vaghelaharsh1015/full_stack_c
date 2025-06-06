#include<stdio.h>
int main()
{
    float  week,year,day,hr;
    printf("enter a value of week :");
    scanf("%f",&  week);

    year=week*52;
    day=year/365;
    hr=day/24;

    printf("hr =%f" ,hr);
    return 0;
}