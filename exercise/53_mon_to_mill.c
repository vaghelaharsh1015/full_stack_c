#include<stdio.h>
int main()
{
    float mon,year,mill;
    printf("entr a value of mon  :");
    scanf( "%f" ,& mon );

    year=mon/12;
    mill=year/1000;

     printf("mill  =%f", mill);
     return 0 ;
}