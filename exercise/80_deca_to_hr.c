#include<stdio.h>
int main()
{
    float   dec,year,day,hr;
    printf("enter a value of dec:");
    scanf("%f",& dec);

    year=dec/10;
    day=year/365;
    hr=day/24;

    printf("hr =%f",hr);
    return 0;
}