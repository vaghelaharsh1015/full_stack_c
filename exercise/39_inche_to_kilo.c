#include<stdio.h>
int main()
{
    float inch,cm,mtr,km;
    printf("enter a value of inch :");
    scanf ("%f", & inch );

    cm=inch/10;
    mtr=cm/100;
    km=mtr/1000;

    printf(" km =%f", km);
    return 0 ;
}