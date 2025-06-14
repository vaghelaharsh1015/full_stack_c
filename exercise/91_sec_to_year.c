#include<stdio.h>
int main()
{
    float   sec,min,hr,day,year;
    printf("enter a value of  sec :");
    scanf("%f",& sec);
    
    min=sec*60;
    hr=min*60;
    day=hr*24;
    year=day*365;

    printf("  year =%f", year);
    return 0;
}