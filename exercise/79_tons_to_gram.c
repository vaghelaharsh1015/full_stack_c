#include<stdio.h>
int main()
{
    float  ton,kg,gm;
    printf("enter a value of  ton:");
    scanf("%f",& ton);

    kg=ton/1000;
    gm=kg/1000;

    printf("gm =%f",gm);
    return 0;
}