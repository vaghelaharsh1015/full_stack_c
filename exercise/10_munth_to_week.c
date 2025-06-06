#include<stdio.h>
int main()
{
    int month,year,week;

    printf("enter a value of month ;");
    scanf("%d",& month );

    year = month/ 12;
    week = year/52;

    printf("week = %d", week );
    return 0;
}