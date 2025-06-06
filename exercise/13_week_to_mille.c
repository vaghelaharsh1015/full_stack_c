#include<stdio.h>
int main()
{
    int  week=1;
    int year=0;
    int mill=0;

    printf("enter a value of week:");
    scanf("%d",& week);

    year= week/52;
    mill = year/1000;

    printf("mill = %d", mill);
    return 0;
}