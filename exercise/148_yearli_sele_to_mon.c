#include<stdio.h>
int main()
{
    float  yearlyselery ,montlyselery;
    printf("enter a value of yearlyselery :");
    scanf("%f",& yearlyselery );

    montlyselery= yearlyselery/12;

    printf("montlyselery  =%f",montlyselery);
    return 0;
}