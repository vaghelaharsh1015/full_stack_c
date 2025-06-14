#include<stdio.h>
int main()
{
    float mon,year,day,hr;
    printf("entr a value of mon :");
    scanf( "%f",& mon );

     year=mon/12;
     day=year/12;
     hr=day/24;


     printf("hr=%f",  hr);
     return 0 ;
}