
#include<stdio.h>
int main()
{
    float day,hr,min ;
    printf("enter a value of day :");
    scanf("%f",& day);

    hr=day/24;
    min=hr/60;

    printf("min =%f",min);
    return 0;
}