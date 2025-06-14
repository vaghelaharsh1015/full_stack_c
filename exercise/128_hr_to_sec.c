#include<stdio.h>
int main()
{
    float hr,min,sec ;
    printf("enter a value of hr:");
    scanf("%f",& hr);

    min=hr/60;
    sec=min/60;

    printf(" sec=%f" ,sec);
    return 0;
}