#include<stdio.h>
int main()
{
    float day,year,sen ;
    printf("enter a value of day");
    scanf("%f",& day);

    year=day*365;
    sen=year*100;

    
    printf(" sen =%f", sen);
    return 0;
}