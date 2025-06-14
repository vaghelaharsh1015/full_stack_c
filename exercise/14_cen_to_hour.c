# include<stdio.h>
int main()
{
    
    int cen,year,day,hour;
      printf("enter a value of cen:");
      scanf("%d", & cen);

      cen=year/100;
      year=day/365;
      day=hour/24;

      printf("day=%d",day);
      return 0;
}