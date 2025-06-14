#include<stdio.h>
int main()
{
    float week,year,cen ;
    printf("enter a value of week :");
    scanf("%f",&  week);

    year=week*52;
    cen=year*10;

    printf(" year =%f" ,year);
    return 0;
}