#include<stdio.h>
int main()
{
    float inch,cen;
    printf("enter a value of inch :");
    scanf("%f",& inch);

    cen=inch/1.60;

    printf(" cen=%f" ,cen);
    return 0;
}