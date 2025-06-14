#include<stdio.h>
int main()
{
    float year,day,hr,minit;
    printf("enter a value of year : ");
    scanf ("%f", &year);

    day=year*365;
    hr=day*24;
    minit= hr*60;

    printf("minit=%f", minit);
    return 0;
}