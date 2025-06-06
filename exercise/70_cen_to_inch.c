#include<stdio.h>
int main()
{
    float cm,foot,inch ;
    printf("enter a value of  cm :");
    scanf("%f", & cm);

    foot=cm/30.48;
    inch=foot/2.54;

    printf("inch =%f", inch);
    return 0;
}
