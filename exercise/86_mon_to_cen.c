#include<stdio.h>
int main()
{
    float  mon,year,cen;
    printf("enter a value of mon :");
    scanf("%f",& mon);
  
    year=mon/12;
    cen=year/100;


    printf(" cen=%f" , cen);
    return 0;
}