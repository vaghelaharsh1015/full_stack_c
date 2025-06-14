#include<stdio.h>
int main()
{
    float cen,mtr,kilomtr ;
    printf("enter a value of cen:");
    scanf("%f",& cen);

    mtr=cen/100;
    kilomtr=mtr*1000;

    printf(" mtr =%f" , mtr);
    return 0;
}