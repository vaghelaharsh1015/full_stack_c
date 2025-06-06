#include<stdio.h>
int main()
{
    float day ,hr,minit,sec;
    printf("enter a value of day :");
    scanf("%f",& day );

    hr=day/24;
    minit=hr/60;
    sec=minit/60;
    
    printf("sec=%f",sec );
    return 0 ;
}