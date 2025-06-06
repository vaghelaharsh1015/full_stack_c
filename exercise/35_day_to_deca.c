#include<stdio.h>
int main ()
{
    float day,year,deca;
    printf("nter a value of day :");
    scanf("%f",&day);

    year= day*365;
    deca=year*10;

    printf(" deca =%f",deca);
    return 0;
}