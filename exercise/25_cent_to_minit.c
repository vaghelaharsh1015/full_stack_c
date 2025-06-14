#include<stdio.h>
int main()
{
    int cent,year,day,hr,minit;
    printf("enter a value of cent: ");
    scanf("%d",& cent);

    year=cent/100;
    year=day*365;
    minit=hr/60;

    printf("minit = %d", minit);
    return 0;
}