#include<stdio.h>
int main()
{
    float mill,cen,year,week;
    printf("enter a value of mill :");
    scanf("%f",& mill);

    cen=mill/100;
    year=cen/10;
    week=year/52;

    printf("week=%f", week);
    return 0 ;

}