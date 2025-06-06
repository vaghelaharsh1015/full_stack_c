#include<stdio.h>
int main()
{
    float dec,year,mon ;
    printf("enter a value of dec :");
    scanf("%f",&  dec);

    year=dec/10;
    mon=year/12;

    printf("mon =%f",mon);
    return 0;
}