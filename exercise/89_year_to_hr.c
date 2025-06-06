#include<stdio.h>
int main()
{
    float year,day,hr ;
    printf("enter a value of year :");
    scanf("%f",& year);

    day=year/365;
    hr=day/24;

    printf(" hr=%f" ,hr);
    return 0;
}