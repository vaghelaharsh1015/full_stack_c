#include<stdio.h>
int main()
{
    float mil,kilmtr,mtr,cen ;
    printf("enter a value of  mill:");
    scanf("%f",& mil );

    kilmtr=mil/1000;
    mtr=kilmtr/1000;
    cen=mtr/100;

    printf("cen =%f" ,cen);
    return 0;
}