#include<stdio.h>
int main()
{
    float dec,year,week ;
    printf("enter a value of dec:");
    scanf("%f",& dec);

    year=dec/10;
    week=year/365;

    printf(" week=%f" ,week);
    return 0;
}