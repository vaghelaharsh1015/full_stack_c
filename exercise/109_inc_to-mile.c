#include<stdio.h>
int main()
{
    float inch,cm,mtr,km,mil ;
    printf("enter a value of inch ");
    scanf("%f",& inch);

    cm=inch*30.65;
    mtr=cm*100;
    km=mtr*100;
    mil=km*1000;

    printf(" mil=%f",mil);
    return 0;
}