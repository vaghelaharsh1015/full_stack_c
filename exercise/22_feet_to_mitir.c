#include<stdio.h>
int main()
{
    float foot,cen,mitar;
    printf(" enter a value of foot : ");
    scanf("%f",& foot);

    cen= foot*30.48;
    mitar= cen*100;

    printf("mitar=%f",foot);
    return 0; 
}