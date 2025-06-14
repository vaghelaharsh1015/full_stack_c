#include<stdio.h>
int main()
{
    float mile,km,mtr,cm,foot;
    printf("enter a value of mile ");
    scanf("%f",& mile);

    km=mile/1.600;
    mtr=km/1000;
    cm=mtr/100;
    foot=cm*30.48;

    printf(" foot=%f", foot);
    return 0;
}