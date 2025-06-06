
#include<stdio.h>
int main()
{
    float mile,km,mtr ;
    printf("enter a value of mile :");
    scanf("%f",& mile);

    km=mile/1000;
    mtr=km/100;

    printf(" mtr=%f",mtr);
    return 0;
}