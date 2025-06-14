#include<stdio.h>
int main()
{
    float mtr,cm, inch  ;
    printf("entr a value of mtr :");
    scanf( "%f" ,& mtr );

    cm= mtr/100;
    inch=cm/2.54;

     printf(" inch =%f", inch);
     return 0 ;
}