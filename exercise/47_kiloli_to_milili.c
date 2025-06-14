#include<stdio.h>
int main()
{
    float kilo,ltr,mili;
    printf("enter a value of kilo :");
    scanf ("%f",& kilo);
 
    ltr=kilo/1000;
    mili=ltr/100;
    printf(" mili=%f",mili );
    return 0;
}