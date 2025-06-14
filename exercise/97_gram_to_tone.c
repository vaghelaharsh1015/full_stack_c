#include<stdio.h>
int main()
{
    float gram,kg,tone;
    printf("enter a value of gram ");
    scanf("%f",& gram);

    kg=gram*1000;
    tone=kg*100;

    printf(" tone =%f", tone );
    return 0;
}