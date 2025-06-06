#include<stdio.h>
int main()
{
    float  mtr,cm,feet;
    printf("enter a value of mtr :");
    scanf("%f", &mtr );

    cm=mtr/100;
    feet=cm/30.48;



    printf("feet =%f", feet);
    return 0;
}