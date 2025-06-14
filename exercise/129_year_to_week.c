#include<stdio.h>
int main()
{
    float  year,week;
    printf("enter a value of year :");
    scanf("%f",& year);

    week=year/52;

    printf(" week =%f" ,week);
    return 0;
}