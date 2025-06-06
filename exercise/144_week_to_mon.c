
#include<stdio.h>
int main()
{
    float week,year,mon ;
    printf("enter a value of week :");
    scanf("%f",& week);

    year=week/52;
    mon=year/12;


    printf(" mon =%f",mon);
    return 0;
}