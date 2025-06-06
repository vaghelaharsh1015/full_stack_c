#include<stdio.h>
int main ()
{
    float foot,cm,mtr,km,mile;
    printf("enter a value of foot:");
    scanf("%f",& foot);
    
    cm=foot*30.48;
    cm=mtr/100;
    mtr=km/1000;

    printf("km=%f", km);
    return 0;

}