# include<stdio.h>
int main()
{
    int minit,hr,day,year,cent;
    printf("enter a value of minit :");
    scanf("%d",& minit);

    hr=minit*60;
    day=hr*24;
    year=day*365;
    cent=year*100;

    printf("cent = %d",cent);
    return 0;
}