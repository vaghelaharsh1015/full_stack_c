#include<stdio.h>
int main()
{
    int cen,year,mon;
    printf("enter a value of cen :");
    scanf("%d",& cen);

    cen= year*100;
    year= mon*12;

    printf ("mon= %d",mon);
    return 0;
    
}