#include<stdio.h>
int main()
{
    float feet,cm,mtr,km,mile;
    printf("enter a value of feet ");
    scanf("%f",& feet);

    cm=feet*30.65;
    mtr=cm*100;
    km=mtr*1000;
    mile=km*1.6000;

    printf("  mile=%f", mile);
    return 0;
}