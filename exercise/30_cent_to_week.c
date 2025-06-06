#include<stdio.h>
int main ()
{
    float cen,year,week ;
    printf("enter a value of cen :");
    scanf("%f",& cen);

    year=cen/100;
    week=year/52;

    printf("  week=%f", week);
    return 0;
}