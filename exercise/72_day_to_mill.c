#include<stdio.h>
int main()
{
    float  day ,year,mill;
    printf("enter a value of day:");
    scanf("%f", &day );

    year=day/365;
    mill=year/1000;


    printf("mill =%f", mill);
    return 0;
}