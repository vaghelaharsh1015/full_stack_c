#include<stdio.h>
int main()
{
    float kilo,mtr,cen,inch ;
    printf("enter a value of kilo:");
    scanf("%f",&kilo );

    mtr=kilo/1000;
    cen=mtr/100;
    inch=cen/1.60;

    printf(" inch=%f" ,inch);
    return 0;
}