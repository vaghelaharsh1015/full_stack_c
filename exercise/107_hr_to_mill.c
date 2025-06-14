#include<stdio.h>
int main()
{
    float hr,day,year,mill ;
    printf("enter a value of hr ");
    scanf("%f",& hr);

    day=hr*24;
    year=day*365;
    mill=year*1000;

    printf(" mill=%f", mill);
    return 0;
}