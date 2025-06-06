#include<stdio.h>
int main ()
{
    int yearday  ;
    printf("enter a value  of year day  :");
    scanf("%d",& yearday  );

    if ( yearday % 4 == 0 ){
        printf(" a year is lipe year .\n ");
    }

    else
    {
        printf("a year is not lipe year.\n");
    }
    
    return 0;

}