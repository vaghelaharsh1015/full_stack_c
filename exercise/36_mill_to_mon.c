# include<stdio.h>
int main ()
{
    float mill,year,mon;
    printf("enter a valu of mill :");
    scanf(" %f", & mill);

    year= mill/1000;
    mon=year/12;

    printf("mon=%f",mon);
    return 0;
}