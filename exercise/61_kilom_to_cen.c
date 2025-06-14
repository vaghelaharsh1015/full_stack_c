#include<stdio.h>
int main()
{
    float km,mtr,cm;
    printf("entr a value of km :");
    scanf( "%f",& km);

    mtr=km/1000;
    cm=mtr/100;

     printf("cm  =%f" , cm);
     return 0 ;
}