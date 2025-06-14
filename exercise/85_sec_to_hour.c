#include<stdio.h>
int main()
{
    float  sec,min,hr;
    printf("enter a value of sec :");
    scanf("%f",& sec) ;

    min=sec/60;
    hr=min/60;

    printf("hr =%f" , hr);
    return 0;
}