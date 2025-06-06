#include<stdio.h>
int main()
{
    float cm,mtr,km,mile;
    printf("entr a value of  cm :");
    scanf( "%f",&  cm);

    mtr=cm/100;
    km=mtr/1000;
    mile=km/1.60;

     printf(" mile =%f" , mile);
     return 0 ;
}