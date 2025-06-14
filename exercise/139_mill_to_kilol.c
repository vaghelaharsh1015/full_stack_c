#include<stdio.h>
int main()
{
    float mill,ltr,kilo ;
    printf("enter a value of mill :");
    scanf("%f",&  mill);

    ltr=mill*1000;
    kilo=ltr*1000;

    printf(" kilo=%f" ,kilo);
    return 0;
}