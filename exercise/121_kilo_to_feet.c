#include<stdio.h>
int main()
{
    float kilo,mtr,cen,feet ;
    printf("enter a value of kilo :");
    scanf("%f",&  kilo);

    mtr=kilo/1000;
    cen=mtr/100;
    feet=cen/1.60;

    printf("feet =%f" ,feet);
    return 0;
}